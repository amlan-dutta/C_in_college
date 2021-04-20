#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter your 1st number");
	scanf("%d",&a);
	printf("Enter your 2nd number");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping the numbers become 1st=%d, 2nd=%d",a,b);
	getch();
}
