#include<stdio.h>
#include<conio.h>
main()
{
	int tot,mar,p;
	printf("enter the values of marks total");
	scanf("%d%d",&mar,&tot);
	if(mar<=tot)
	{
		p=(mar/tot)*100;
		printf(" the percentage is %d",p);
	}
	getch();
}
