#include<stdio.h>
void main()
{
	int n,a=0,b=1,c;
	printf("Enter the number to terms of fibonacci series");
	scanf("%d",&n);
	printf("\n");
	while(n>0)
	{
		printf("%d ",b);
		c=b+a;
		a=b;
		b=c;
		n--;
	}
	getch();
}
		
		
	