#include<stdio.h>
void main()
{
	int i;
	char str[100];
	printf("Enter your srting=");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("Length of the string=%d\n",i);
	printf("String after reversing= ");
	while(i>0)
	{
		i--;
		printf("%c",str[i]);
	}
	getch();
}
