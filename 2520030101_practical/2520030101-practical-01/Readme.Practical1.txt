# OS Practical 1 – Linux Process Creation and Command Execution

## Aim
To develop a C program that demonstrates how Linux executes a command entered by the user using process creation and system calls.

## Description
In this practical, I developed a C program named `practical1.c`. The program accepts a Linux command from the user and creates a child process using `fork()`. The child process executes the command using `execlp()`, while the parent process waits for the child using `wait()`. The program also displays the Process IDs of the child and parent processes.

## Objectives
- To understand Linux process creation.
- To use `fork()` to create a child process.
- To execute a Linux command using `execlp()`.
- To use `wait()` for parent-child process synchronization.
- To understand Process IDs.
- To study basic Linux hardware and process commands.

## Technologies Used
- **Language:** C
- **Operating System:** Linux
- **Compiler:** GCC
- **System Calls:** `fork()`, `execlp()`, `wait()`

## How the Program Works
1. The user enters a Linux command.
2. `fork()` creates a child process.
3. The child process displays its PID.
4. The child executes the entered command using `execlp()`.
5. The parent waits for the child using `wait()`.
6. After completion, the parent displays its PID.

## Compilation and Execution

```bash
gcc practical1.c -o practical1
./practical1