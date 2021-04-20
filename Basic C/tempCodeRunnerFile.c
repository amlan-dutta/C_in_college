#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=0,j=0,k=0;
	printf("Now enter your bianary number to convert to decimal number");
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		j=j+k*pow(2,i);
		i = i+1;
		n=n/10;
	}
	printf("Your Decimal number is = %d",j);
	return 0;
}
