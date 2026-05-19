#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



#define BUF_SIZE  100

int main(int argc, char ** argv)
{
    char buf[BUF_SIZE];
    while(1)
    {    
        printf("I am a simple shell, enter your command $ "); // prompt
        fgets(buf, BUF_SIZE, stdin);
        buf[strlen(buf) -1] = 0; //'\0'
        
        if (strlen(buf) == 0)
            continue; // user entered enter key

        pid_t pid = fork();

        if(pid > 0)
        {
            int status;
            printf("PARENT: my_pid = %d, my child pid: %d\n", getpid(), pid);
            wait(&status);
            printf("PARENT: my pid = %d, my child status = %d", getpid(), WEXITSTATUS(status));
        }
        if(pid == 0)
        {
            printf("CHILD: my_pid = %d, my parent pid: %d\n", getpid(), getppid());
            char * newargv[] = {buf, NULL};
            char * newenvp[] = {NULL};
            execve(buf, newargv, newenvp);
            printf("exec failed, kernel is not the mode of exceuting programs\n");
            exit(-1);
        }
        else
        {
            printf("PARENT: failed to fork\n");
        }
    }
    return 0;
}