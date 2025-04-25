#include<stdio.h>
int max[10][10],alloc[10][10],need[10][10],avail[10],i,j,p,r,finish[10]={0},flag=0,fun;
  void main()
 {
 	printf("\n\n simulation of dead lock prevenetion");
 	printf("enter no.of processes,resouces");
 	scanf("%d%d",&p,&r);
 	printf("enter allocation matrix");
 	for(i=0;i<p;i++)
 	for(j=0;j<r;j++)
 	scanf("%d", & alloc[i][j]);
 	printf("enter max matrix");
 	for(i=0;i<p;i++)
 	for(j=0;j<r;j++)
 	scanf("%d",&max[i][j]);
 	printf("enter available matrix");
 	for(i=0;i<r;i++)
 	scanf("%d",&avail[i]);
 	for(i=0;i<p;i++)
 	for(j=0;j<r;j++)
 	need[i][j]=max[i][j]-alloc[i][j];
 
 	if(flag==0)
 	{
 		if(finish[i]!=1)
 		{
 			printf("\n\n failing:mutual exclusion");
 			for(j=0;j<r;j++)
 			{
 				if(avail[j]<need[i][j])
 				avail[j]=need[i][j];
			 }
			 printf("\n by allocating resource to process %d dead lock is prevented ");
			 printf("\n\nlack of preemption");
			 for(j=0;j<r;j++)
			 {
			 	if(avail[j]<need[i][j])
			 	avail[j]=need[i][j];
			 }
			 
			 printf("\n avoiding and one of the condition u can prvent dead lock");
		 }
	 
	}

			if(finish[i]==0)
			{
				for(j=0;j<r;j++)
				{
					if(need[i][j]<=avail[j])
					continue;
					else break;
				}
				if(j==r)
				for(j=0;j<r;j++)
				avail[j]+=alloc[i][j];
				flag=1;
				finish[i]=1;
		}
	}
		
	
	
