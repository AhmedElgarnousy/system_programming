#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    char * newargv[] = {argv[1], NULL};
    char * newenvp[] = {NULL};

    getchar();
    
    execve(argv[1], newargv, newenvp);
    printf("exec failed\n");

    return -2;
}
