#include<stdio.h>
int ncr(int n, int r)
{
	long result=1,i,j;
	for(i=(n-r+1);i<=n;i++)
		result=result*i;
	for(j=1;j<=r;j++)
		result=result/j;
	
	return result;
	
}
void main()
{
	int x,y,z,s,m,c,result;
	char i[1],j[1],k[1];
	scanf("%d",&x);
	scanf("%d",&s);
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&z);
	scanf("%d",&c);
	scanf("%s",i);
	scanf("%s",j);
	scanf("%s",k);
	result=ncr(x,s)*ncr(y,m)*ncr(z,c);
	printf("%d\n",result);
	printf("%s %s %s",i,j,k);
}
