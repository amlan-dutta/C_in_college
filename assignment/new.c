#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,i,size;
	
	printf("Enter the size of array =");
	scanf("%d",&size);
	
	printf("Now enter the integers\n");
	
	for (i = 0; i< size; i++) 
	{
      scanf("%d", arr);
      arr++;
	}
	
	for(i=size;i>=0;i--)
	{
		printf("%d ",*arr);
		arr--;
	}
}