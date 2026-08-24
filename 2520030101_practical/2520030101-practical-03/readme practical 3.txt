Yes bro 👍 Based **only on your Practical-3 document and `practical3.c`**, here is the README in **simple “my words” style**, with the full information in **one single copy**. 

````markdown
# OS Practical 3 – Process Creation and Process States

## Aim

To develop a C program using `fork()` to create a parent and child process and display their Process ID (PID), Parent Process ID (PPID), and observe process states using Linux monitoring tools.

## Description

In this practical, I developed a C program using the `fork()` system call. The `fork()` function creates a new child process from an existing parent process.

The program displays the PID and PPID of both the parent and child processes so that they can be identified separately.

I also used Linux commands such as `ps`, `top`, and the `/proc` filesystem to observe the processes and understand their process states during execution.

## Objectives

- To understand process creation using `fork()`.
- To create a parent and child process.
- To display the PID of the processes.
- To display the PPID of the processes.
- To observe process states during execution.
- To use `ps` to view running processes.
- To use `top` to monitor processes in real time.
- To use `/proc` to inspect process information.

## System Call Used

### fork()

The `fork()` system call is used to create a new child process from the existing parent process.

```c
pid = fork();
````

After calling `fork()`, two processes are created:

* Parent process
* Child process

The return value of `fork()` is used to identify whether the process is the parent or child.

## PID and PPID

### PID

PID stands for **Process ID**. It is a unique number given to a process by the operating system.

The program uses:

```c
getpid()
```

to display the PID of the current process.

### PPID

PPID stands for **Parent Process ID**. It identifies the process that created the current process.

The program uses:

```c
getppid()
```

to display the PPID.

## Program Flow

1. The program starts execution.
2. The `fork()` system call is called.
3. A child process is created.
4. The child process displays its PID and PPID.
5. The parent process displays its PID and PPID.
6. The child process remains active using an infinite loop.
7. Linux monitoring tools are used to observe the processes and their states.

## Compilation

The program can be compiled using GCC:

```bash
gcc practical3.c -o forkprac3
```

## Execution

The program can be executed using:

```bash
./forkprac3
```

## Sample Output

```text
Child Process
Child Process ID is <child_pid>
Parent Process ID is <parent_pid>

Parent Process
Parent Process ID is <parent_pid>
Parent's Parent Process ID is <ppid>
```

The exact PID values depend on the system where the program is executed.

## Process State Observation

The practical also focuses on observing different process states such as:

```text
Ready → Running → Waiting → Terminated
```

Linux monitoring tools were used to observe the processes during their execution.

## Using ps Command

The `ps` command was used to view the processes currently running in the terminal.

```bash
ps
```

It displays information about running processes, including their process IDs and corresponding commands.

This helped me identify the parent and child processes created by the program.

## Using top Command

The `top` command was used to continuously monitor the processes while they were executing.

```bash
top
```

It provides a real-time view of the processes and their activity. This helped me observe how the process status changes during execution.

## Using /proc Filesystem

The `/proc` filesystem was used to inspect information about a particular process.

For example, if the process PID is `622`:

```bash
ls /proc/622
```

The `/proc/622` directory contains different files and directories that provide information about the process.

It contains information related to:

* Process status
* Memory
* Scheduling
* File descriptors
* Other process-related details

This helped me understand how Linux maintains information about an active process.

## Process State Flow

The basic process state transition can be represented as:

```text
Ready
  ↓
Running
  ↓
Waiting
  ↓
Running
  ↓
Terminated
```

The actual state of a process can be observed using Linux monitoring tools such as `ps`, `top`, and `/proc`.

## Result

The C program was successfully developed using the `fork()` system call. A parent and child process were created, and their PID and PPID were displayed.

The `ps` command was used to view running processes, `top` was used to monitor processes in real time, and the `/proc` filesystem was used to inspect detailed information about an active process.

## Conclusion

This practical helped me understand how Linux creates and manages processes using `fork()`. I learned how to identify processes using PID and PPID and how a parent process and child process are related.

I also learned how to use `ps`, `top`, and `/proc` to monitor processes and observe their information and state changes during execution.

```

This matches your uploaded practical and the actual code, including `fork()`, `getpid()`, `getppid()`, the child's infinite loop, and the use of `ps`, `top`, and `/proc`. :contentReference[oaicite:1]{index=1}
```
