#include<stdio.h>
int is_prime_digit(int digit)
{
	return(digit==2||digit==3||digit==5||digit==7);
}
int main()
{
	int num,digit,sum=0;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(is_prime_digit(digit))
		{
			sum+=digit;
		}
		num/=10;
	}
	printf("sum of prime digits:%d\n",sum);
	return 0;
}