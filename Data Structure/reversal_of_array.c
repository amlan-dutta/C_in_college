#include<stdio.h>
void main()
{
	int n;
	printf("\nType the length of the array = ");
	scanf("%d",&n);
	int a[n],b[n],i;
	printf("\nNow enter the values of the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThis is the elements of the array \n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n\nThis is the elements of the array after reversing\n");
	for(i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
		printf("\t%d",b[i]);
	}
	getch();
}
