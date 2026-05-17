### Build Process

```c
hello.c
```

a.out legacy exceutable format

Executable and object file formats
`a.out` - `AIF` - COFF - CMD - COM - ECOFF - ELF -GOFF - Hunk - Mach-O - MZ - NE - OMF - OS/360 - PE - PEF - X - XCOFF

#### Why we need standard executable format

- because there are a varity of compilers that generate an output file execute on linux machine
- so we have to standarize an executable format to provide a standardized structure for OS loaders to efficiently map code into memory, support shared libraries, and ensure portability across different CPU architectures

The Executable and Linkable Format (ELF) is essential because it provides a `standardized`, `flexible`, and `portable binary format` **for** `executables`, `shared libraries`, and `core dumps`, primarily on Unix-like systems.
It enables efficient program loading into memory, supports dynamic linking to save memory, and works across various CPU architectures (x86, ARM, RISC-V)

- gcc the front end to compiler program

### Preprocessor stage

```bash
- gcc -E hello.c | less # shift g to go to end of output of less
- gcc -E hello.c -o hello.i
```

### compilation stage

```bash
$ gcc -S hello.i # gcc -S hello.c
```

### assembler stage

```bash
$ gcc -c hello.s # can't display because its a machine cod3
```

### object file is ELF format but not executable (relocatable), not have the final addresses to target machine

```bash
$ file hello.o

hello.o: ELF 64-bit LSB relocatable, x86-64, version 1 (SYSV), not stripped
```

### generate the executable file

```bash
$ gcc hello.c ## or for debug $ gcc hello.c -g
# $ gcc hello.c -o finalHelloELF

$ file a.out # is executable file in ELF Format

a.out: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=eaaa98fc93f9da37acfc0c3df2859e19effaf85c, for GNU/Linux 3.2.0, with debug_info, not stripped

```

### -save-temps

```bash
$ gcc -save-temps hello.c
```

### search in gcc man page

```bash
$ man gcc

/(write what you want)
```

- **Note**: by default gcc links the C Libaray

### -nolibc option

```bash
$ gcc -nolibc hello.c
```

### linker parameter standard libc

```bash
# -l{Name Of the Library Without lib word
# for ex: libc -> -lc}
$ gcc hello.c -nolibc -lc
# $ gcc hello.c -lc -nolibc # same effect
```
