#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,A,s,x;
	printf("enter a,b,c values");
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c) /2;
	x=s*(s-a)*(s-b)*(s-c);
	A=sqrt(x);
	printf("%d",A);
}
