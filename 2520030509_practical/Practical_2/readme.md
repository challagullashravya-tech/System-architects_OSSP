# Operating Systems – Practical 2

## Aim

To study and implement file handling system calls in C using `open()`, `read()`, and `write()`.

## Objective

* To understand file handling using system calls.
* To open a file using the `open()` system call.
* To read data from a file using the `read()` system call.
* To write data to a file or display data using the `write()` system call.
* To understand file descriptors in Linux.

## System Calls Used

### `open()`

The `open()` system call is used to open an existing file or create a new file. It returns a file descriptor that is used for further file operations.

### `read()`

The `read()` system call is used to read data from a file using its file descriptor.

### `write()`

The `write()` system call is used to write data to a file or to standard output.

### `close()`

The `close()` system call is used to close an opened file.

## Requirements

* Ubuntu/Linux or WSL
* GCC compiler
* VS Code (optional)

## How to Compile

Open the terminal in the Practical 2 folder and run:

```bash
gcc practical2.c -o practical2
```

## How to Execute

```bash
./practical2
```

## Expected Output

The program successfully opens the file, reads the required contents, and writes/displays the data using the appropriate system calls.

## Conclusion

Thus, file handling operations were successfully performed using the `open()`, `read()`, `write()`, and `close()` system calls in C.
