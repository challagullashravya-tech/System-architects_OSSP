# Operating Systems – Practical 3

## Aim

To study and implement process creation using the `fork()` system call in C.

## Objective

* To understand the concept of parent and child processes.
* To create a child process using the `fork()` system call.
* To display the process ID of the parent and child processes.
* To understand the relationship between a process and its parent process.
* To observe a child process using the `ps` command.

## System Calls Used

### `fork()`

The `fork()` system call creates a new child process by duplicating the calling process.

### `getpid()`

The `getpid()` system call returns the process ID of the current process.

### `getppid()`

The `getppid()` system call returns the process ID of the parent process.

## Program Description

The program uses `fork()` to create a child process.

* If `fork()` returns a value less than 0, the fork operation was unsuccessful.
* If `fork()` returns 0, the code is executed by the child process.
* If `fork()` returns a positive value, the code is executed by the parent process.
* The child process enters an infinite loop so that its process can be observed using process-monitoring commands.

## Requirements

* Ubuntu/Linux or WSL
* GCC compiler
* VS Code (optional)

## How to Compile

Open the terminal in the Practical 3 folder and run:

```bash
gcc practical3.c -o practical3
```

## How to Execute

```bash
./practical3
```

## To Observe the Processes

Open another terminal and use:

```bash
ps
```

or:

```bash
ps -f
```

These commands can be used to view the running processes and their process IDs.

## Expected Output

```text
Parent Process
Parent Process ID is ....
Parent's Parent Process ID is ...
Child Process
Child Process ID is ....
Parent Process ID is ....
```

*The process IDs will be different each time the program is executed.*

## Conclusion

Thus, a child process was successfully created using the `fork()` system call, and the process IDs of the parent and child processes were displayed using `getpid()` and `getppid()`.
