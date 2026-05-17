###

Introducing the Windows Terminal

Using the Terminal on Windows

00:00 This is a lesson to give you an introduction to some terms that are helpful to know when you are talking about the terminal. Of course, I didn’t want to miss out the chance of calling these terms terminal terms.

#### Computer Terminal vs terminal emulator or PTY (Pseudo-Terminal)

- computer terminal:
- Terminal Emulator:

---

- [introducing-terminal-windows](https://realpython.com/videos/introducing-terminal-windows/#t=45.76)

Early developers used computer terminals to interact with a central mainframe computer. These were devices with a keyboard and a screen or printer that would display computed output.

- [Connecting an IBM 3151 ASCII terminal to an IBM mainframe computer](https://www.youtube.com/watch?v=V14ac9cRi9Q)

The personal computers that you’re using today contain a different architecture. Still, you can find a terminal application to interact with your computer on a basic level.

These terminal applications are called terminal emulators. As the name suggests, they are emulating the computer terminal. However, nowadays when people talk about the terminal, they usually don’t talk about the old-school computer terminal, but terminal emulators.

Same goes for this course: when we’re talking about the terminal in this course, we are actually talking about the terminal emulator.

There are two other terms that you might hear now and then in combination with the terminal: **command-line interface** `and` **shell**. Command-line interfaces allow you to interact with an application or program through the terminal. You execute commands and see their output.

A shell is a program that provides an interface with specific commands to you.

To bring it all together, the shell provides the commands that you use in a command-line interface, and the terminal is the application you run to access the shell.

01:32 And these were the terminal terms. But enough with the theory for now. Let’s hop into the main part of this course and do some work with the terminal.

---

Bash (Bourne Again SHell) is a **command-line interpreter and scripting language** that serves as the default shell for most Unix-like systems, including Linux and macOS. It allows users to interact with the operating system by typing commands to manage files, run programs, and automate tasks through scripts.

---

#### TTY (Teletypewriter) vs PTY (Pseudo-Terminal)

---

### man command

- https://linux.die.net/man/
- https://www.gnu.org/savannah-checkouts/gnu/coreutils/manual/html_node/

- [build-your-own-shell](https://github.com/codecrafters-io/build-your-own-x#build-your-own-shell)
