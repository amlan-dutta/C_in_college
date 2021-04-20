#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int i=1,j,n;
	float x,m=0,p;
	printf("We are going find 1-(x^1/1!)+(x^2/2!)-(x^3/3!).......  upto n terms\n");
	printf("Now enter the value of x=");
	scanf("%f",&x);
	printf("Now enter the value of n=");
	scanf("%d",&n);
	while(n>1)
	{
		p=pow(x,i);
		for(j=1;j<=i;j++)
		{
			p/=j;
		}
		if(i%2!=0)
			m=m-p;
		else
			m=m+p;
		i+=1;
		n--;
	}
	m=m+1;
	printf("The sum of the series= %f",m);
	getch();
}