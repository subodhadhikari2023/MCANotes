#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main(){
pid_t pid;
pid = fork();
if(pid==0){
printf("Child process created with the id %u \n", getpid());

}else if(pid>0){
printf("Parent process with the id %u \n", getpid());
}



}

