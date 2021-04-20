#include<stdio.h>
void main()
{
	int n,i,a=5;
	printf("Enter the number of terms=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a);
		a+=5;
	}
	getch();
}