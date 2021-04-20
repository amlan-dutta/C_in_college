#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[20];
	int yr;
}stud[100];
int main()
{
	int i,n,r,y,j=0,k;
	printf("Enter number of students");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nInformation about student %d\n",i);
		printf("Enter roll number = ");
		scanf("%d",&stud[i].roll);
		printf("Enter year of admission = ");
		scanf("%d",&stud[i].yr);
		printf("Enter the name of the student = ");
		scanf("%s",stud[i].name);
	}
	printf("\nNow we are going to draw the info\n");
	printf("Enter the roll no.");
	scanf("%d",&r);
	printf("Enter year of admission");
	scanf("%d",&y);
	for(i=1;i<=n;i++)
	{
		if(r==stud[i].roll && y==stud[i].yr)
		{
			++j;
			for(k=0;k<j;k++)
			{
				printf("Name of the student = %s",stud[i].name);
			}
		}
	}
	return 0;
}
