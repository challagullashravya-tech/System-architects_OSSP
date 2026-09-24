# OS Practical – Producer-Consumer & Pipe Communication

## 1. Producer-Consumer Communication using Anonymous Pipe

### Aim

To implement a producer-consumer program using an anonymous pipe, where the parent process generates data and the child process consumes it. Measure the communication efficiency.

### Concepts

- Producer and Consumer
- Parent and Child Process
- Anonymous Pipe
- Inter-Process Communication (IPC)
- `clock()` for time measurement

### Working

The parent process acts as the producer and generates the values **10, 20, 30, 40, and 50**. The child process acts as the consumer and receives the values through the anonymous pipe. The communication time is measured using `clock()`.

### Execution

```bash
gcc producer.c
./a.out
```

### Result

The producer successfully generated the five values, and the consumer received them through the pipe. The execution time of the processes was also measured.

---

## 2. Implementing `ls -l | grep ".c"`

### Aim

To develop a C program that executes the equivalent of the shell command:

```bash
ls -l | grep ".c"
```

using `fork()`, `pipe()`, `dup2()`, and `exec()` system calls.

### Concepts

- `fork()`
- `pipe()`
- `dup2()`
- `exec()`
- Inter-Process Communication
- UNIX/Linux Pipes

### Working

The program creates a pipe between two processes.

- The first child executes `ls -l` and sends its output to the pipe.
- The second child receives the pipe input and executes `grep ".c"`.
- `dup2()` redirects standard output/input through the pipe.
- `exec()` executes the required commands.

### Equivalent Shell Command

```bash
ls -l | grep ".c"
```

### Result

The program successfully demonstrates communication between two processes using a pipe and performs the equivalent operation of `ls -l | grep ".c"`.

## Conclusion

The practical demonstrates producer-consumer communication using an anonymous pipe and process-to-process communication using UNIX pipe and process system calls.
