This project is about how a parent process manages its child processes in an operating system.

First, we create multiple child processes.
The parent process uses wait() to wait until a child process finishes.
waitpid() is used when the parent wants to wait for a particular child process.
We also demonstrate a zombie process, which happens when a child finishes but the parent has not yet collected its completion status.
Using wait() or waitpid() helps the parent properly synchronize with the child and clean up its process information.
