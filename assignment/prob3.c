#include<stdio.h>
void main()
{
	int i,j;
	char num[100];
	printf("Enter string with number=");
	gets(num);
	for(i=0;num[i]!='\0';i++)
	{
		j=num[i]-48;
		printf("%d",j);
	}
	getch();
}