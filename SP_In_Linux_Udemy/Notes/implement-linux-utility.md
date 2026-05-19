<p align="center">
  <img width="80%" height="100%" src="../Notes/imgs/args.JPG">
</p>

##### removing ./ from my-own-programs

<p align="center">
  <img width="80%" height="100%" src="../Notes/imgs/bin.JPG">
  <img width="80%" height="100%" src="../Notes/imgs/bin2.JPG">
</p>

```bash
$ sudo cp argELF /usr/bin/
```

#### strace mycat program

```bash
$ strace ./mycat mycat.c
```

<p align="center">
  <img width="80%" height="100%" src="../Notes/imgs/mycat1.JPG">
  <img width="80%" height="100%" src="../Notes/imgs/mycat2.JPG">
</p>

- Note: fd of mycat.c is 3 after fd number 2 for the open stderr
- also note program exits after read system call return 0 (END-OF-FILE)
