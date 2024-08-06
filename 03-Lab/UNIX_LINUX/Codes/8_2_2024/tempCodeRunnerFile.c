// Using wait system call for parent to wait till the child is being executed
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
// Header file to use wait() system call
#include <sys/wait.h>
void main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {

        for (int i = 0; i < 10; i++)
        {
            printf("Child process with the process id %u & Iteration number: %d \n", getpid(), i);
        }
    }
    if (pid > 0)
    {

        printf("Parent process with the process id %u  \n", getpid());
        sleep(30);
    }
}