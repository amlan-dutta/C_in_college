#include<stdio.h>
void main(){
	int x,y,i,j,k;
	printf("We are going to find out GCD of 2 numbers\n");
	printf("Put your first number");
	scanf("%d",&x);
	printf("Put your second number");
	scanf("%d",&y);
	k=y;
	if(x<y)
		k=x;
	
	for(i=k;i>=1;i--)
		{
			if((x-y)%i==0)
			{
				j=i;
				break;
			}
		}
	printf("Your GCD of %d and %d = %d",x,y,j);
	getch();
}	
		