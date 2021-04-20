#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,ans=0,j=0;
	printf("Enter 0 to convert binary to decimal\n");
	printf("Enter 1 to convert decimel to binary\n");
	scanf("%d",&i);
	printf("Now enter your number");
	scanf("%d",&n);
	if(i==0)
	{
		while(n>0)
		{
		j=n%10;
		ans=ans+j*pow(2,i);
		i = i+1;
		n=n/10;
		}
	}
	else
	{
		while(n>0)
		{
			j=n%2;
			ans=ans+j*i;
			i=i*10;
			n=n/2;
		}
	}
	printf("Your answer is = %d",ans);
	getch();
	return 0;
}