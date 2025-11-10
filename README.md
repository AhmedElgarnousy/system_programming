## System Programming In Linux

### Interprocess Communication Mechanisms

Processes communicate with each other and with the kernel to coordinate their activities. Linux supports a number of Inter-Process Communication (IPC) mechanisms.

The Linux IPC facilities provide a method for multiple processes to communicate with one another. There are several methods of IPC available to Linux C programmers:

    Half-duplex UNIX pipes
    FIFOs (named pipes)
    SYSV style message queues
    SYSV style semaphore sets
    SYSV style shared memory segments
    Networking sockets (Berkeley style) (not covered in this paper)
    Full-duplex pipes (STREAMS pipes) (not covered in this paper)

These facilities, when used effectively, provide a solid framework for client/server development on any UNIX system (including Linux).

# RESOURCES

-

## ONline Docs

[The Linux Programmer’s Guide 6 —in-depth section on IPC](https://tldp.org/LDP/lpg/node7.html)
[The Linux Kernel 8 —how the Linux kernel implements IPC.](https://tldp.org/LDP/tlk/ipc/ipc.html)
[NIX Network Programming Volume 2 home page 5 —includes source code from Stevens’ superfine book.](http://www.kohala.com/start/unpv12e.html)
[UNIX System Calls and Subroutines using C](https://users.cs.cf.ac.uk/Dave.Marshall/C/)
