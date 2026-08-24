#include<unistd.h>
#include<stdio.h>
int main()
{
int pid;
pid=fork();
if(pid<0)
printf("fork not successful");
else if(pid==0)
{
printf("Child process\n");
printf("The process id is %d\n",getpid());
printf("The parent process id is %d\n",getppid());
}
else {
printf("Parent process\n");
printf("The process id is %d\n",getpid());
printf("The parent process id is %d\n",getppid());
}
}