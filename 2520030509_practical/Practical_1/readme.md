Aim

To write a C program to create a child process using fork() and execute Linux commands using execlp().

Description

This practical demonstrates process creation and execution of Linux commands. The program creates a child process using fork(). The entered command is executed using execlp(), while the parent process waits for the child process to complete using wait().

Commands Executed
ls – Displays files and directories.
uname – Displays system and kernel information.
lscpu – Displays CPU information.
lsblk – Displays block device and storage information.
ps – Displays currently running processes.
top – Displays real-time process and resource information.
Requirements
Ubuntu/Linux
GCC Compiler
Terminal
Compilation
gcc practical_1.c -o practical_1
Execution
./practical_1

Enter a Linux command when prompted, such as:

ls
System Calls Used
System Call	Purpose
fork()	Creates a child process
getpid()	Returns the process ID
execlp()	Executes the specified Linux command
wait()	Makes the parent wait for the child process
Result

The program was successfully compiled and executed in Ubuntu, and the specified Linux commands were executed successfully.