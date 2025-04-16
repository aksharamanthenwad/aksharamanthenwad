#include<stdio.h>
int main()
{
	int i,j,count=0,sum,start,end;
	printf("enter the start value");
	scanf("%d",&start);
	printf("enter the end value");
	scanf("%d",&end);
	for(i=start+1;i<=end;i++)
		{
			count=0;
			for(j=2;j<i;j++)
		{
			if(i%j==0)
		{
			count++;
			break;
			}	
}
	if(count==0)
	
		sum=sum+i;
}
	printf("%d",sum);
}
	


