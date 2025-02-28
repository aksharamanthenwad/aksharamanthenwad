#include<stdio.h>
main()
{
	int n,digit,count=0,remainder;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter the digit to count");
	scanf("%d",&digit);
	while(n>0)
	{
		remainder=n%10;
		if(remainder==digit)
		{
			count++;
		}
		n=n/10;
	}
	printf(" the digit %d occurs %d time",digit,count);
}
