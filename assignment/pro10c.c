#include<stdio.h>
void main()
{
	int n,i,j,k,x=1;
	printf("Number of row with maximum stars=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j= n-i;j>=0;j--)
			printf(" ");
		for(k=1;k<=x;k++)
			printf("*");
		printf("\n");
		x+=2;
	}
	x-=4;
	for(i=n-1;i>=1;i--)
	{
		for(j= n-i;j>=0;j--)
			printf(" ");
		for(k=1;k<=x;k++)
			printf("*");
		printf("\n");
		x-=2;
	}
	getch();
}