#include<stdio.h>
#include<math.h>
 void main()
 {
	 int n, i, j=1;
	 printf("Enter thr number of terms =");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
		j=pow(i,3)+1;
		printf("%d ",j); 
	 }
	 getch();
 }