#include<stdio.h>
void main(){
	int n,i,j,k;
	printf("Enter the number of rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j= n-i;j>=0;j--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("* ");
	printf("\n");}
	getch();
}