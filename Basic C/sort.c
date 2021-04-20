#include<stdio.h>
#include<string.h>
void main()
{
	int n,i,j=0,k,a;
	printf("We are going to find the ranks of some students and their marks\n");
	printf("Enter the number of students\n");
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++)
	{
		printf("Enter data for roll no.=%d\n",i+1);
		printf("Marks = ");
		scanf("%d",&b[i]);
	}
	printf("Rank\tRoll No.\tMarks\n");
	for (n=0;n<a;n++)
	{
		for(i=0;i<a;i++)
		{
			if(b[i]>j)
			{
				j = b[i];
				k = i;
			}
		}
		printf ("%d\t%d\t\t%d\t\n",n+1,k+1,j);
		b[k]=0;
		j=0;
	}
	getch();
}