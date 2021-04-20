#include<stdio.h>
int main()
{
	int m,n,i,sum=0;
	printf("Enter the value of m=");
	scanf("%d",&m);
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum of all integers from m to n =%d",sum);
	getch();
}