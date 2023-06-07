#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main(){
int pid, pid1, pid2;
pid = fork();
if(pid == 0){
sleep(3);
printf("Child 1  --> PID = %d and PPID = %d\n",getpid(),getppid());
}
else{
pid1 = fork();
if(pid1 == 0){
sleep(2);
printf("Child 2  --> PID = %d and PPID = %d\n",getpid(),getppid());
}
else{
pid2 = fork();
if(pid2 == 0){
printf("Child 3  --> PID = %d and PPID = %d\n",getpid(),getppid());
}
}
}
return 0;
}

