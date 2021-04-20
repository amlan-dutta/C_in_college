#include<stdio.h>
void main()
 {
	int n,a=5,i;
	printf("Enter thr number of terms =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {	
		if(i%2!=0)
		{
			printf("%d ",a);
			a=a*2;
		}
		if(i%2 ==0)
		{
			printf("%d ",a);
			a=a+3;
		}
	 }
	 getch();
 }