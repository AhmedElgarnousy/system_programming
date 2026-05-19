#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define COUNT 100
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// declare for C++ compatibility
#ifdef __cplusplus
extern "C"
#endif
int cp_main(int argc, char *argv[]) {
    char buf[COUNT];
    if(argc > 3)
    {
        printf("usage error %s filename", argv[0]);
        exit(-1);
    }

    int dst_fd = open(argv[2], O_WRONLY | O_CREAT, 0644);
    if(dst_fd < 0)
    {
        printf("can't create the dst file\n");
        exit(-1);
    }
    
    int src_fd = open(argv[1], O_RDONLY);
    if(src_fd < 0)
    {
        printf("can't open the src file\n");
        exit(-2);
    }

    int num_read = read(src_fd, buf, COUNT);
    while (num_read > 0)
    {
       if( write(dst_fd, buf, COUNT)  < 0)
       {
            printf("write in src file failed\n");
            exit(-4);
       }
        num_read = (src_fd, buf, COUNT);
    }

    close(dst_fd);
    close(src_fd);

    return 0;
}