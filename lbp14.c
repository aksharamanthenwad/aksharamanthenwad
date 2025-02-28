#include<stdio.h>
#include<conio.h>
main()
{
	int s,n;
	printf("enter n value");
	scanf("%d",&n);
	s=n*(n+1)*(2*n+1)/6;
	printf("%d",s);
	getch();
}
