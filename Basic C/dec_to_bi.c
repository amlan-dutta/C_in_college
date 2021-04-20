#include<stdio.h>
void main()
{
	int n, i=0, j, a[50];
	printf("Enter your decimal number to convert in binary\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		a[i]=n%2;
		i++;
		n=n/2;
	}
	printf("Your binary number is = ");
	for(j=i;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	getch();
}
	