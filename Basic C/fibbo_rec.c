#include<stdio.h>
int fibbo(int n);
int main()
{
	int n;
	printf("Enter the length of series");
	scanf("%d",&n);
	printf("The series is-\n");
	fibbo(n);
	return 0;
}
int fibbo(int n)
{
	static int first=0,second=1,sum;
	if(n>0)
	{
		printf("%d ",first);
		sum=first+second;
		first=second;
		second=sum;
		return (fibbo(n-1));
	}
}
