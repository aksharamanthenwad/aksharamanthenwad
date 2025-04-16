#include<stdio.h>
int main()
{
	int i,j,a,b,count,r;
	printf("enter the range");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		{
			r=i%10;
			if(r==9)
			printf("%5d",i);
		}
	}
}
