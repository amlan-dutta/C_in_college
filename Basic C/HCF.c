#include<stdio.h>
void main(){
	int n,m,i,j=0;
	printf("We are going to find the HCF of two number\n");
	printf("Your first number=");
	scanf("%d",&n);
	printf("Your second number=");
	scanf("%d",&m);
	if(n<=m)
	{
		int arr[n];
		for(i=1;i<=n;i++)
		{
			if(n%i==0 && m%i==0)
			{
				arr[j]=i;
				j++;
			}
		}
	
	printf("HCF of two number = %d",arr[j-1]);
	}

	else
	{
		int arr[m];
		for(i=1;i<=m;i++)
		{
			if(n%i==0 && m%i==0)
			{
				arr[j]=i;
				j++;
			}
		}
	
	printf("HCF of two number = %d",arr[j-1]);
	}

}
				
	