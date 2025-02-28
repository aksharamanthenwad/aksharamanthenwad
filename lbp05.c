#include<stdio.h>
main()
{
	int x,y,D,a,b,c;
	printf("enter a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>=0)
	{
		if(D>0)
		{
			x=(-b+sqrt(D))/2*a;
			y=(-b+sqrt(D))/2*a;
			printf("%d %d",x,y);
		}
		else
		{
			x=-b/2*a;
			y=-b/2*a;
			printf("%d %d",x,y);
		}
	}
	else
	{
		printf("roots are imaginary");
	}
}
