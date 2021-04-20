#include<stdio.h>
#include<math.h>

int main() 
{ 
	int n,i;
	int x;
    scanf("%d",&n);
    long array[n + 1];
	 
    array[0] = 1; 
    array[1] = 0;  
  
    for (i = 2; i <= n; ++i) 
        array[i] = (i - 1) * (array[i - 1] +  array[i - 2]); 
        
    x=array[n]%1000000007;
    printf("%d",x);
	return 0; 
} 
  
