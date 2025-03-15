#include<stdio.h>
int main()
{
	int num,binary=0,count=1;
	printf("enter a decimal number");
	scanf("%d",&num);
	if(num=0)
	{
		printf("bnary form");
	}
	while(num>0)
	{
		int remainder=num%2;
		binary=remainder*count;
		num/2;
		count*=10;
	}
	printf("binary form:%d",binary);
}
