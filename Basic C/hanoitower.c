#include<stdio.h>
void move(int n,char s,char a,char d)
{
	if(n==1)
	{
		printf("Move 1 disk from %c to %c\n",s,d);
		return;	
	}
	else
	{
		move(n-1,s,d,a);
		move(1,s,a,d);
		move(n-1,a,s,d);
	}
	
}
int main()
{
	int n;
	char s,a,d;
	printf("Enter the number of rings");
	scanf("%d",&n);
	move(n,'a','b','c');
	return 0;
}

