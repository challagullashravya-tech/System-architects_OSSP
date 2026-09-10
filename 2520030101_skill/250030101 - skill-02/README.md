# Simple Shell

## Description
A simple shell program written in C. It displays a prompt, reads a command, and exits when the user types `exit`.

## File
`src/shell.c`

## How to Compile
```bash
gcc src/shell.c
```

## How to Run
```bash
./a.out
```

## How It Works
1. Displays `myshell>` prompt.
2. Reads the user command.
3. If the command is `exit`, the shell stops.
4. Otherwise, it displays the entered command.
5. The shell continues the loop.

## Example
```text
myshell> rishitha
You typed: rishitha

myshell> os
You typed: os

myshell> exit
Exiting shell...
```

## Technologies Used
- C
- GCC
- Linux Terminal
- Nano Editor