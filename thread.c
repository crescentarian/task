#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int data_set[1000];
int chunk_size=100;

void *Add(void *arg)
{
int start=(int)arg;
int end=start+chunk_size;

int sum=0;
int i;
for(i=start;i<end;i++)
{
sum=sum+data_set[i];
}
return ((void *)sum);
}

int main()
{
int a[10],i,sums;
pthread_t thread_t[10];

for(i=0;i<1000;i++)
{
data_set[i]=i;
}

for(i=0;i<10;i++)
{
pthread_create(&thread_t[i],NULL,Add,(void*)(i*chunk_size));
}

for(i=0;i<10;i++)
{
pthread_join(thread_t[i],(void**)&a[i]);
}

for(i=0;i<10;i++)
{
sums=sums+a[i];
}
printf("sum is = %d",sums);

return 0;
}
