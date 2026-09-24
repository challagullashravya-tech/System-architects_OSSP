# OS Practical – Process Synchronization & IPC

## 1. Process Synchronization using `wait()` and `waitpid()`

### Aim

To create multiple child processes and synchronize them using `wait()` and `waitpid()`. Also, demonstrate and eliminate zombie processes.

### Concepts

- `fork()`
- `wait()`
- `waitpid()`
- Child processes
- Zombie processes
- Process synchronization

### `wait()` vs `waitpid()`

| `wait()waitpid()`   |                               |
| ------------------- | ----------------------------- |
| Waits for any child | Can wait for a specific child |
| Less flexible       | More flexible                 |

A zombie process occurs when a child finishes but the parent has not collected its exit status. Using `wait()` or `waitpid()` properly removes the zombie.

---

## 2. Producer-Consumer using Anonymous Pipe

### Aim

To implement communication between a producer and consumer using an anonymous pipe.

The producer generates **10, 20, 30, 40, 50**, and the consumer receives the same values through the pipe. Execution time is measured using `clock()`.

### Concepts

- IPC
- Anonymous pipe
- Producer and Consumer
- `clock()`

### Execution

```bash
gcc producer.c
./a.out

```

### Result

The producer successfully sends the values through the pipe, and the consumer receives them successfully.
