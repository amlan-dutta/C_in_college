#include<stdio.h>
void main()
{
	int n,i,m=1;
	printf("Enter the number of terms= ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		m=m*5;
		printf("%d ",m);
	}
	getch();
}