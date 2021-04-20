#include<stdio.h>
int main()
{
	int m,n,i;
	printf("Enter the value of m=");
	scanf("%d",&m);
	printf("Enter the value of n=");
	scanf("%d",&n);
	printf("Even numbers are- ");
	for(i=m;i<=n;i++)
	{
		
		if(i%2==0)
		{
			printf("%d, ",i);
		}
	}
	printf("\nOdd numbers are- ");
	for(i=m;i<=n;i++)
	{
		
		if(i%2!=0)
		{
			printf("%d, ",i);
		}
	}
	
	getch();
}
	