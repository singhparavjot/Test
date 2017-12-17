#include<stdio.h>
int S=1,a=10;
void wait()
{
  //wait()
   while(S==0);
   S=S-1; 
}
void signal()
{

 S=S+1;
}

void process1()
{
   printf("WE are in process 1\n");
    wait();
   a++;
   signal();
  printf("%d",a);
 
 
}
void process2()
{
   wait();
   printf("WE are in process 2\n");
   
   a=a-2;
   signal();
  printf("%d",a);
}

int main()
{
  
  printf("Hello");
  int i=0;
  for(i=0;i<5;i++)
   {
    process1();
    process2();
   
   }
  
  printf("Value of semaphore after last execution %d", S);
}
