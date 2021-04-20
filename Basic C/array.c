#include<stdio.h>
void main(){
	int n,j;
	scanf("%d",&n);
	int array[n];
	for(j=0;j<n;j++)
	{
		array[j]=j+1;
		printf("%d",array[j]);
	}
	
	getch();
}