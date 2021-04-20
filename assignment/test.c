#include<stdio.h>
 
int main() 
{
	int n,*pt,len=0;
	scanf("%d",&n);
	while(n>0)
	{
		pt=n%2;
		n=n/2;
		pt++;
	}
	while(pt!='\0')
	{
		len++;
		pt++;
	}
	printf("%d",len);
	
	
}

