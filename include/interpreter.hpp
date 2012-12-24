#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include <string>

class BrainfuckInterpreter
{
public:
    BrainfuckInterpreter(void);
    ~BrainfuckInterpreter(void);

    void load(char *);
    void run(void);

private:
    std::string *program;
    char memory[1024];

    int pc;
    int mp;

    void execStatement(char);
};

#endif
