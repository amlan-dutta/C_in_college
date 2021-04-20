#include<stdio.h>
void main()
{
	int n,a=0,b=1,c;
	printf("Enter the number to terms of the fibonacci series");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d ",a);
		c=a;
		a=b+a;
		b=c;
		n--;
	}
	getch();
}