#include<stdio.h>
#include<math.h>
void main()
{
	int N,x;
	scanf("%d",&N);
	x=pow((N-1),2);
	x=x%1000000007;
	printf("%d",x);
	
}
