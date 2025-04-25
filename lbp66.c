#include<stdio.h>
int main()
{
	 int a=0,b=1,n,i,sum=1,c;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum=sum+c;
	}
	printf("%d",sum);
}