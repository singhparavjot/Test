#include<stdio.h>
int main()
{
   int pid[5],bt[5],wt[5],ct[5],ta[5],i,j;
   printf("Enter the Pid & Turn Around time for each process respectively\n");
  //Taking input from User
   for(i=0;i<5;i++)
      {
              printf("Enter the pid:-");
              scanf("%d",&pid[i]);
              printf("\n");
              printf("Enter the burst time\n");
              scanf("%d",&bt[i]);
      } 
  //Logic to calculate completion Time
      i=0;
   ct[i]=bt[i];
      
   for(i=1;i<=5;i++)
      {
             ct[i]=ct[i-1]+bt[i];
      }
 //Logic to calculate completion Time
   
  
 /*for(i=0;i<3;i++)
      {
           printf("%d  \n",ct[i]);  
      }
   */    //Loop to print completion Time 
 
    //Loop to calculate Turnaround Time
    for(i=0;i<5;i++)
      {
        ta[i]=ct[i];  //Assuming Batch System and hence taking Arrival Time =0;
      }
   
   //Calculating Waiting Time   
   
   for(i=0;i<5;i++)
     {
          wt[i]=ta[i]-bt[i];
     }
   //Printing the total data;
    printf("PID:     BT:      CT:      TA:        WT:\n");
  for(i=0;i<5;i++)
     {
      printf("%d     %d       %d             %d              %d",pid[i],bt[i],ct[i],ta[i],wt[i]);
      printf("\n");
     }







   
}
