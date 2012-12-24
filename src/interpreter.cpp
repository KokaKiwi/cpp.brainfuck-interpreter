#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include "interpreter.hpp"

BrainfuckInterpreter::BrainfuckInterpreter()
{
    this->program = NULL;
    this->pc = 0;
    this->mp = 0;
    bzero(this->memory, sizeof(this->memory));
};

BrainfuckInterpreter::~BrainfuckInterpreter()
{
    if (this->program != NULL)
    {
        delete this->program;
    }
}

void BrainfuckInterpreter::load(char *program)
{
    this->program = new std::string(program);
}

void BrainfuckInterpreter::run()
{
    char c;
    if (this->program != NULL)
    {
        for (this->pc = 0; this->pc < this->program->size(); this->pc++)
        {
            c = this->program->at(this->pc);
            this->execStatement(c);
        }
    }
}

void BrainfuckInterpreter::execStatement(char c)
{
    switch (c)
    {
        case '+':
            this->memory[this->mp]++;
            break;

        case '-':
            this->memory[this->mp]--;
            break;

        case '>':
            this->mp++;
            break;

        case '<':
            this->mp--;
            break;

        case '.':
            printf("%c", this->memory[this->mp]);
            break;

        case '[':
            if (this->memory[this->mp] == 0)
            {
                while ((c = this->program->at(++this->pc)) && c != ']');
            }
            break;

        case ']':
            if (this->memory[this->mp])
            {
                while ((c = this->program->at(--this->pc)) && c != '[');
            }
            break;
    }
}
