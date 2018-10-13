#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int i;
for(i=0;i<4;i=i+1)
{
fork();
printf("Hello1");
}
printf("exiting process");
return 0;
}


