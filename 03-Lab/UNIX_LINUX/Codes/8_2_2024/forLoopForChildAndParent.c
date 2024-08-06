#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
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

        for (int i = 0; i < 10; i++)
        {
            printf("Parent process with the process id %u & Iteration number: %d \n", getpid(), i);
        }
    }
}