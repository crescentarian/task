#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
int c,arraySize,total;

int array[1000];

int fd[2],fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2];
pipe(fd);pipe(fd1);pipe(fd2);pipe(fd3);pipe(fd4);pipe(fd5);pipe(fd6);pipe(fd7);pipe(fd8);pipe(fd9);
int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0;

int cpid=fork();
if(cpid==0)
{
int start=0;
int end=100;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum=sum+array[arraySize];
}
write(fd[1],&sum,sizeof(sum));
close(fd[0]);
}

else
{
int cpid1=fork();
if(cpid1==0)
{
int start=100;
int end=200;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum1=sum1+array[arraySize];
}
write(fd1[1],&sum1,sizeof(sum1));
close(fd1[0]);
}

else
{
int cpid2=fork();
if(cpid2==0)
{
int start=200;
int end=300;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum2=sum2+array[arraySize];
}
write(fd2[1],&sum2,sizeof(sum2));
close(fd2[0]);
}

else
{
int cpid3=fork();
if(cpid3==0)
{
int start=300;
int end=400;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum3=sum3+array[arraySize];
}
write(fd3[1],&sum3,sizeof(sum3));
close(fd3[0]);
}

else
{
int cpid4=fork();
if(cpid4==0)
{
int start=400;
int end=500;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum4=sum4+array[arraySize];
}
write(fd4[1],&sum4,sizeof(sum4));
close(fd4[0]);
}

else
{
int cpid5=fork();
if(cpid5==0)
{
int start=500;
int end=600;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum5=sum5+array[arraySize];
}
write(fd5[1],&sum5,sizeof(sum5));
close(fd5[0]);
}

else
{
int cpid6=fork();
if(cpid6==0)
{
int start=600;
int end=700;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum6=sum6+array[arraySize];
}
write(fd6[1],&sum6,sizeof(sum6));
close(fd6[0]);
}

else
{
int cpid7=fork();
if(cpid7==0)
{
int start=700;
int end=800;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum7=sum7+array[arraySize];
}
write(fd7[1],&sum7,sizeof(sum7));
close(fd7[0]);
}

else
{
int cpid8=fork();
if(cpid8==0)
{
int start=800;
int end=900;
for(arraySize=start;arraySize<end;arraySize=arraySize+1)
{
sum8=sum8+array[arraySize];
}
write(fd8[1],&sum8,sizeof(sum8));
close(fd8[0]);
}

else
{
int cpid9=fork();
if(cpid9==0)
{
int start=900;
int end=1000;
for(arraySize=start;arraySize<=end;arraySize=arraySize+1)
{
sum9=sum9+array[arraySize];
}
write(fd9[1],&sum9,sizeof(sum9));
close(fd9[0]);
}

else
{
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);
wait(NULL);

int s=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0;

read(fd[0],&s,sizeof(s));
close(fd[1]);
read(fd1[0],&s1,sizeof(s1));
close(fd1[1]);
read(fd2[0],&s2,sizeof(s2));
close(fd2[1]);
read(fd3[0],&s3,sizeof(s3));
close(fd3[1]);
read(fd4[0],&s4,sizeof(s4));
close(fd4[1]);
read(fd5[0],&s5,sizeof(s5));
close(fd5[1]);
read(fd6[0],&s6,sizeof(s6));
close(fd6[1]);
read(fd7[0],&s7,sizeof(s7));
close(fd7[1]);
read(fd8[0],&s8,sizeof(s8));
close(fd8[1]);
read(fd9[0],&s9,sizeof(s9));
close(fd9[1]);

total=s+s1+s2+s3+s4+s5+s6+s7+s8+s9;
printf("%d\n total = ",total);
}

}
}
}
}
}
}
}
}
}

return 0;
}
