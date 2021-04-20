#include<stdio.h>
void main()
{
	int i, sum=0;
	printf("Sum of number disible by 6 in(100-200)= ");
	for(i=100;i<=200;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	getch();
}