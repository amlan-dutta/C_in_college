#include <stdio.h>
int hcf(int n1, int n2);
int main()
{
   int n1, n2;
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);

   printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1,n2));
   return 0;
}

int hcf(int n1, int n2)
{
	int i,j,k;
	j=n1>n2?n2:n1;
	for(i=j;i>=1;i--)
	{
		if(n1%1==0&&n2%i==0)
		{
			k=i;
			break;
		}
	}
	return(k);
}
