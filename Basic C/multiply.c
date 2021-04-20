#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf("Enter your first number");
	scanf("%d",&a);
	printf("Enter your second number");
	scanf("%d",&b);
	while(a>0)
	{
		c=c+b;
		a--;
	}
	printf("Multiplication of two number will be %d",c);
	getch();
	
}
