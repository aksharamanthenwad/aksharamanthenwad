#include<stdio.h>
int main()
{
	char month[10];
	int data;
	printf("enter month");
	scanf("%s",&month);
	printf("enter data");
	scanf("%d",&data);
	if(strcmp(month,"feb")==0&&data==27)
	printf("");
	else
	printf("0");
	
}
