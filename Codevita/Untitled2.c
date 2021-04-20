#include<stdio.h>
long factorial(int n)
{
	int c;
	long fact = 1;
  	
	for (c = 1; c <= n; c++)
    	fact = fact * c;

	return fact;
}
int main() 
{ 
	int n,i;
    scanf("%d",&n);
    long x;
    int y;
    if(n<=2)
    	x=n-1;
    else
    	x=factorial(n)-(factorial(n-1)*(n+1))/2;
    	
    y=x%1000000007;
    printf("%d",y);
    return 0;
}
