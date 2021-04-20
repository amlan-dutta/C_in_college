#include<stdio.h>
void main()
{
	int m,n,o;
	printf("1st number :");
	scanf("%d",&m);
	printf("2nd number :");
	scanf("%d",&n);
	printf("3rd number :");
	scanf("%d",&o);
	if((m>=n)&&(m>=o))
	{
		o=m;
	}
	else if ((n>=m)&&(n>=o))
	{
		o=n;
	}
	printf("Highest number is =%d",o);
	getch();
	
	
}