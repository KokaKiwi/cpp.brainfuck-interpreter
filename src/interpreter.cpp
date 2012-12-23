#include <cstdlib>
#include <cstdio>
#include <cstring>
#include "interpreter.hpp"

BrainfuckInterpreter::BrainfuckInterpreter()
{
    this->program = NULL;
    bzero(this->memory, sizeof(this->memory));
};

BrainfuckInterpreter::~BrainfuckInterpreter()
{
    if (this->program != NULL)
    {
        delete this->program;
    }
}

bool BrainfuckInterpreter::load(String filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return false;
    }

    fclose(fp);
    return true;
}

void BrainfuckInterpreter::run()
{

}
