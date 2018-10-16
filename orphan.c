#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main()
{
int pid=fork();
if(pid>0)
printf("in parent process");
else if (pid==0)
{
sleep(30);
printf("in child process");
}
return 0;
}

