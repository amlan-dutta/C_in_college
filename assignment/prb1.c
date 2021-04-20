#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int i=0,n;
	float x,m;
	printf("We are going find 1+ x^2+ x^4+ x^6+.......  upto n terms\n");
	printf("Now enter the value of x=");
	scanf("%f",&x);
	printf("Now enter the value of n=");
	scanf("%d",&n);
	while(n>0)
	{
		m+=pow(x,i);
		n--;
		i=i+2;
	}
	printf("The sum of the series= %f",m);
	getch();
}