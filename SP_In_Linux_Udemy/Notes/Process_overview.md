#### processes and programs

process is an instance of executing a program.

we have elf file contains some info from this info we need to run process

kernel mapped to processes at the same virtual addresses and physical addresses

مش كل بروسيس هتعمل مابنج للكرنال مختلف

some questions

- page exception
- RAM full

also shared library like the kernel exists in specified physical addresses and mapped to the processes at same addresses

```bash
$ ldd dynamic_exceutable
```

---

### Additional Resources

- https://gist.github.com/CodingKoopa/4c9e558c087f27e036988d80a6dbfc08

- https://medium.com/@amerather_9719/how-linux-kernel-manages-application-memory-27c23ac94177

- https://sam4k.com/linternals-virtual-memory-part-1/
