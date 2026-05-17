#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void wrapper_print(char *pBuff)
{
//  char MyBuf[] = "hello\n";
    int ret =  write(2, pBuff, strlen(pBuff));
    if (ret == -1 )
    {
        printf("error occured\n");
        printf("res is: %d\n", ret);
        exit(-1);
    }
    else{
        printf("on sucess\n");
        printf("res is: %d\n", ret);
    }
}

int main()
{
    char MyBuf[] = "hello\n";
    wrapper_print(MyBuf);
    return 0;
}