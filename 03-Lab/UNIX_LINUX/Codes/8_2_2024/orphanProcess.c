#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
// Header file to use wait() system call
#include <sys/wait.h>
#include <stdlib.h>
void main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        

        for (int i = 0; i < 10; i++)
        {
            printf("Child process with the process id %u, It's parent's process id is: %u & Iteration number: %d \n", getpid(), getppid(), i);
        }
    }
    if (pid > 0)
    {

        // Forcely terminating the parent immediately after creating its child
        exit(0);
    }
}