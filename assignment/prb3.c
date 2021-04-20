#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int i=1,n;
	float x,m;
	printf("We are going find 1+(x^1/1)+(x^2/2)+(x^3/3).......  upto n terms\n");
	printf("Now enter the value of x=");
	scanf("%f",&x);
	printf("Now enter the value of n=");
	scanf("%d",&n);
	while(n>1)
	{
		m+=pow(x,i)/i;
		n--;
		i=i+1;
	}
	m=m+1;
	printf("The sum of the series= %f",m);
	getch();
}