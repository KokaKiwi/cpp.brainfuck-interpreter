#include <cstdlib>
#include <cstdio>
#include "interpreter.hpp"

int main(int argc, char **argv)
{
    BrainfuckInterpreter interpreter;

    if (argc == 2)
    {
        interpreter.load(argv[1]);
        interpreter.run();
    }
    else
    {
        fprintf(stderr, "Not enough arguments!\n");
    }

    return EXIT_SUCCESS;
}
