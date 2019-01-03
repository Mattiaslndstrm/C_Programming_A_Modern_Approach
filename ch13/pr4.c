#include <stdio.h>

// Prints the command line arguments in reverse.
int main(int argc, char *argv[])
{
    for (char **p = &argv[0] + argc - 1; p > &argv[0]; p--)
        printf("%s ", *p);
    printf("\n");
}
