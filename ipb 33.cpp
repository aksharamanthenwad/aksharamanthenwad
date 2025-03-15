#include<stdio.h>
int main()
{
	char str[10];
	int count=0,i;
	printf("enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='10',i++)
	{
		char s=str[i];
		if[s=='a'||s=='e'||s=='i'||s=='o'||s=='v']
		{
			count++;
		}
	}
	printf("%d",count);
}
