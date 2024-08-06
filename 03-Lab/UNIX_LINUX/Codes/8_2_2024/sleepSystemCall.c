// Using sleep system call for parent to wait till the child is being executed
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
void main()
{
    pid_t pid;
    pid = fork();
    if (pid==0)
    {
        
        for (int i = 0; i < 10; i++)
        {
            printf("Child process with the process id %u & Iteration number: %d \n",getpid(),i);
        }
        
    }
     if (pid>0)
     {
        // It forces the parent process to sleep for two seconds. The time unit is passed in the sleep method as argument
        sleep(5);
       
        for (int i = 0; i < 10; i++)
        {
            sleep(1);
            printf("Parent process with the process id %u & Iteration number: %d \n",getpid(),i);
        }
     }
        
    
}