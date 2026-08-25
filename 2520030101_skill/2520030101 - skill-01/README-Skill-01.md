# OS Skill 1 – Ubuntu and C Program

## Aim

To set up Ubuntu on Windows and install the required tools to write and run a C program.

## Description

In this skill, I learned how to set up Ubuntu on Windows using PowerShell. After installing Ubuntu, I created a Linux username and password and updated the Ubuntu system.

I then installed GCC, which is used to compile C programs. After installing GCC, I verified the installation and created a C program using the `nano` editor.

The C program uses the `fork()` system call to create a child process and displays the process ID and parent process ID of both the parent and child processes.

## Steps Followed

### Step 1: Open PowerShell as Administrator

1. Press the Windows key.
2. Search for PowerShell.
3. Right-click on Windows PowerShell.
4. Open it as Administrator.

## Step 2: Install Ubuntu

Ubuntu was installed using PowerShell. The required installation commands were used to set up Ubuntu on the system.

## Step 3: Restart the Computer

After the installation, I restarted the computer when prompted.

## Step 4: Complete Ubuntu Setup

After restarting:

1. Ubuntu opened automatically or was opened from the Start menu.
2. I waited for the installation to complete.
3. I created a Linux username.

Example:

```text
Enter new UNIX username: anusha
````

## Step 5: Create a Password

I was asked to create a password for the Ubuntu user.

```text
New password: ****
Retype new password: ****
```

## Step 6: Update Ubuntu

I updated the Ubuntu system using the required update commands.

## Step 7: Install GCC

I installed GCC, which is the C compiler used to compile C programs.

## Step 8: Verify the Installation

After installing GCC, I verified that the compiler was installed correctly.

## Step 9: Create the C Program

I created the C program using the `nano` text editor.

```bash
nano process.c
```

The program uses `fork()` to create a child process.

## C Program

```c
#include <unistd.h>
#include <stdio.h>

int main()
{
    int pid;

    pid = fork();

    if(pid < 0)
        printf("fork not successful");

    else if(pid == 0)
    {
        printf("Child process\n");
        printf("The process id is %d\n", getpid());
        printf("The parent process id is %d\n", getppid());
    }

    else
    {
        printf("Parent process\n");
        printf("The process id is %d\n", getpid());
        printf("The parent process id is %d\n", getppid());
    }
}
```

## Step 10: Compile the Program

The program can be compiled using GCC.

```bash
gcc process.c -o process
```

## Run the Program

After compiling, the program can be executed using:

```bash
./process
```

## Output

The program displays information about both the child and parent processes.

Example:

```text
Child process
The process id is <child_pid>
The parent process id is <parent_pid>

Parent process
The process id is <parent_pid>
The parent process id is <ppid>
```

The exact process ID numbers may be different each time the program is executed.

## Concepts Learned

* How to set up Ubuntu on Windows.
* How to create a Linux username and password.
* How to update Ubuntu.
* How to install and verify GCC.
* How to create a C program using the `nano` editor.
* How to compile and run a C program in Ubuntu.
* How `fork()` creates a child process.
* How `getpid()` displays the current process ID.
* How `getppid()` displays the parent process ID.

## Result

Ubuntu was successfully set up and GCC was installed. I created, compiled, and executed a C program using the `fork()` system call. The program successfully displayed the process IDs of the parent and child processes.

## Conclusion

This skill helped me learn the basic setup of a Linux environment and how to run C programs in Ubuntu. I learned how to install GCC, create and compile a C program, and use `fork()` to create a child process. I also understood how PID and PPID are used to identify processes.

```

The C code and its `fork()`, `getpid()`, and `getppid()` usage are taken directly from your uploaded file. :contentReference[oaicite:1]{index=1}
```
