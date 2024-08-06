#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
void main()
{
    pid_t childid=0;
    int size;
    printf("Enter the size of the chain: \n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        if ((childid=fork())==0)
        {
            break;
        }else{
            printf("Child process created with the id: %u and the parent is %u \n",getpid(),getppid());
            
        }
        
    }
}