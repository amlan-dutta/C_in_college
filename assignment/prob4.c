#include<stdio.h>
void main()
{
	int i,n,flag=0;
	char s[100];
	printf("Enter the string =");
	gets(s);
	for(n=0;s[n]!='\0';n++);
	for(i=0;i<=n;i++)
	{
		if(s[i]!=s[n-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("The string is palindrome");
	else
		printf("The string is not palindrome");
	getch();
}