#include<stdio.h>
#include<stdlib.h>
void main()
{
	int (*ptr)[],i,size;
	printf("Enter the size of array");
	scanf("%d",&size);
	printf("Now enter the numbers");
	for(i=0;i<size;i++)
		scanf("%d",&(*ptr)[i]);
	printf("Your entered numbers are\n");
	for(i=0;i<size;i++)
		printf("%d ",(*ptr)[i]);

	getch();
}
