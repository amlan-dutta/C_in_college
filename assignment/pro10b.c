#include<stdio.h>
void main(){
	int n,i,j,k,x=1;
	printf("Enter the number of rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j= n-i;j>=0;j--)
			printf(" ");
		for(k=1;k<=x;k++)
			printf("*");
		printf("\n");
		x+=2;
	}
	getch();
}