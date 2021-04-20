#include<stdio.h>
int main()
{
int Q,a,b,i;
scanf("%d",&Q);
int array[Q-1][2];
for(i=0;i<Q;i++)
	scanf("%d %d",&array[i][0],&array[i][1]);

for(i=0;i<Q;i++)
{
	a=array[i][0];
	b=array[i][1];
	if((b==a-2)||(b==a+2))
		printf("YES\n");
	else if(a%2==0){
		if(b==a-1)
			printf("YES\n");
		else
		printf("NO\n");
	}
	else if(a%2 != 0){
		if (b==a+1)
			printf("YES\n");
		else
		printf("NO\n");
	}
	
	
		}
	

return 0;
}