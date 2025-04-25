#include<stdio.h>
int main()
{
	int n,rem,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(temp%sum==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}