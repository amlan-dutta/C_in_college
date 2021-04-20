#include<stdio.h>
void main()
{
	int n, i,a=0,b=1,c=0,d;
	printf("Enter the number to terms of the series =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",c);
		d=c;
		c=a+b+c;
		if(i>1)
			a=b;
		b=d;
		
	}
	getch();
}