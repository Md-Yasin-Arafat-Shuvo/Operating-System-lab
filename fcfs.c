#include<stdio.h>
int main()
{
          int process[10],arrival[10],burst[10],start[10],end[10],wait[10],turnaround[10];
          int n,i,j,temp,totalwait=0,totalturn=0;
          float avgwait,avgturn;
          printf("Enter the number of processes\n");
          scanf("%d",&n);
          printf("Enter value for each process\n\n");
          printf("process name,arrival time,Burst time\n");
          for(i=0;i<n;i++)
          scanf("%d%d%d",&process[i],&arrival[i],&burst[i]);
          for(i=0;i<n-1;i++)
         {
                  for(j=i+1;j<n;j++)
                 {
                          if(arrival[i]>arrival[j])
                          {
                                     temp=arrival[i];
                                     arrival[i]=arrival[j];
                                     arrival[j]=temp;
                                     temp=process[i];
                                     process[i]=process[j];
                                     process[j]=temp;
                                     temp=burst[i];
                                     burst[i]=burst[j];
                                     burst[j]=temp;
                           }
                  }
          }
          printf("\nProcess name\tArrival time\tBurst time\n");
          for(i=0;i<n;i++)
          printf("p[%d]\t\t%d\t\t%d\n",process[i],arrival[i],burst[i]);
          start[0]=arrival[0];
          end[0]=arrival[0]+burst[0];
          wait[0]=0;
          turnaround[0]=burst[0];
          totalturn+=turnaround[0];
          for(i=1;i<n;i++)
         {
                   if(arrival[i]<=end[i-1])
                   start[i]=end[i-1];
                   else
                   start[i]=arrival[i];
                   wait[i]=start[i]-arrival[i];
                   totalwait+=wait[i];
                   end[i]=start[i]+burst[i];
                   turnaround[i]=burst[i]+wait[i];
                   totalturn+=turnaround[i];
          }
          avgwait=(float)totalwait/(float)n;
          avgturn=(float)totalturn/(float)n;
          printf("\n\n|Process name\t|Arrival time\t|Burst time\t|Start time\t|End time\t|Waiting time\t|Turnaround time|\n");
          for(i=0;i<n;i++)
          printf("|p[%d]\t\t|%d\t\t|%d\t\t|%d\t\t|%d\t\t|%d\t\t|%d\n",process[i],arrival[i],burst[i],start[i],
                       end[i],wait[i],turnaround[i]);
          printf("Total waiting time is %d\n",totalwait);
          printf("Average waiting time is %f\n",avgwait);
          printf("Total turnaround time is %d\n",totalturn);
          printf("Average turnaround time is %f\n",avgturn);
          return 0;

}
