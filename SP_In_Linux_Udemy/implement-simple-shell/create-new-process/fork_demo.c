#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    getchar();
    pid_t pid = fork();
    
    if(pid > 0)
    {
        printf("PARENT: my_pid = %d, my child pid: %d\n", getpid(), pid);
    }
    if(pid == 0)
    {
        printf("CHILD: my_pid = %d, my parent pid: %d\n", getpid(), getppid());
    }
    else
    {
        printf("Failed process creation\n");
    }
    getchar();

    return 0;
}