#include<stdio.h>
int main()
{
	int t,n,i,j,sum1,sum2,a[100000],b[100000];
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
		sum1=0;
		sum2=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i%2==0)
				sum1+=a[i];
			else
				sum2+=a[i];
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
			if(i%2==0)
				sum2+=b[i];
			else
				sum1+=b[i];
		}
		if(sum2>sum1)
			printf("\n%d",sum1);
		else
			printf("\n%d",sum2);
	}
	return 0;
} 