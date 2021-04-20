#include<stdio.h>
int main()
{
	int x,y,z,s,m,c,i,j,k;
	char a1[4];char a2[1];
	fgets(a1,4,stdin);
	i=a1[0];
	j=a1[2];
	scanf("%s",a2);
	k=a2[0];
	printf("%d %d %d",i,j,k);
   
}
