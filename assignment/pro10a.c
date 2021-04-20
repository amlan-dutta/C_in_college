#include<stdio.h>
void main()
{
	int i,j=1,k,n;
	printf("Enter the number of rows =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d ",j);
			j++;
		}
		printf("\n");
	}
	getch();
}