#ifndef INTERPRETER_H_
#define INTERPRETER_H_

class BrainfuckInterpreter
{
public:
    BrainfuckInterpreter(void);
    ~BrainfuckInterpreter(void);

    bool load(String);
    void run(void);

private:
    char *program;
    char memory[1024];
};

#endif
