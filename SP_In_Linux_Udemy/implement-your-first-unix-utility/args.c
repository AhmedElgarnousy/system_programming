#include <stdio.h>

int main(int argc, char **argv)
{
    // for(int i =0; argv[i] != NULL; i++)
    for(int i =0; i < (argc + 1); i++)
    {
        printf("argv[%d]= %s\n", i, argv[i]);
    }
    return 0;
}