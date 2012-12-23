#include <cstdio>
#include "interpreter.hpp"

int main(int argc, char **argv)
{
    BrainfuckInterpreter *interpreter = new BrainfuckInterpreter();
    String filename;

    if (argc == 2)
    {
        filename = argv[1];
        if (interpreter->load(argv[1]))
        {
            interpreter->run();
        }
        else
        {
            fprintf(stderr, "Error during loading program.\n");
        }
    }
    else
    {
        fprintf(stderr, "Not enough arguments!\n");
    }

    delete interpreter;

    return (0);
}
