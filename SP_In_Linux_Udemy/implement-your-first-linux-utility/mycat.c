#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define COUNT 100


int main(int argc, void *argv[])
{
    char buf[COUNT];

    int fd  = open(argv[1], O_RDONLY);

    if(fd < 0)
    {
        printf("coundn't open the file\n");
        exit(-2);
    }
    
    
    int num_bytes_read = read(fd, buf, COUNT);
    while(num_bytes_read  > 0) // another way: while((num_bytes_read = read(fd, buf, COUNT)) > 0)
    {
        if(write(1, buf, num_bytes_read) < 0)
        {
            printf("writing failed\n");
            exit(-3);
        }
        num_bytes_read = read(fd, buf, COUNT);
    }

    return 0;
}