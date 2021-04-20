#include<stdio.h>
void main()
{
	int i,j,var=0;
	char str1[100],str2[100];
	printf("Enter your 1st srting=");
	gets(str1);
	printf("Enter your 2nd srting=");
	gets(str2);
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++);
	j=i<j?i:j;
	for(i=0;i<=j;i++)
	{
		if(str1[i]==str2[i])
			var=0;
		else
		{
			var=1;
			break;
		}
	}
	if(var==0)
		printf("Strings are equal");
	else
		printf("Strings are not equal");
	getch();
}
	
