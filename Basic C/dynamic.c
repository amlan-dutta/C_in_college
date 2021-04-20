#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,column,i,j;
	printf("Enter the number of rows=");
	scanf("%d",&row);
	printf("Enter the number of columns=");
	scanf("%d",&column);
	int **pt;
	pt=(int**)malloc(row * sizeof(int*));
	printf("Now enter the entities row wise");
	for(i=0;i<row;i++)
	{
		pt[i]=(int*)malloc(column * sizeof(int));
		for(j=0;j<column;j++)
		{
			scanf("%d",&pt[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("\t%d",pt[i][j]);
		}
		printf("\n");
	}

}
