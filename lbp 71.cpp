#include<stdio.h>
int main()
{
	int num,digit,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	if(num<0)
	{
		num=-num;
	}
	while (num>0)
	{
		digit=num%10;
		if(digit%2!=0)
		{
			sum+=digit;
		}
		num/=10;
	}
	printf("sum of odd digits:%d\n",sum);
	return 0;
}