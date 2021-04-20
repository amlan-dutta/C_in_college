#include<stdio.h>
int main()
{
	int n,i,mul;
	printf("Enter the integer=");
	scanf("%d",&n);
	printf("The table of %d is following-\n",n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf(" %d x %d = %d\n",n,i,mul);
	}
	getch();
}
