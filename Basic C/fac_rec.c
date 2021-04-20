#include<stdio.h>
int fac (int x);
int main()
{
	int x;
	printf("Enter the number=");
	scanf("%d",&x);
	printf("Factorial of %d = %d",x,fac(x));
	return 0;
}
int fac (int x)
{
	int f=1;
	if(x>1)
	
		return	f=x*fac(x-1);
	
	else
	
		return f;
	
}
