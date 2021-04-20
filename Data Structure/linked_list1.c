#include<stdio.h>
struct node
{
	int VALUE;
	struct node *NEXT;
}
struct node *FIRST = NULL;
struct node *LAST = NULL;
void insert(int);
void delete(int);
void print(int);
struct node *search(int);
void main()
{
	int choice;
	printf("\nWe are going to create a linked list");
	do
	{
		printf("\n\t1.Insert\n\t2.Delete\n\t3.Search\n\t4.Print\n\t5.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		case 1:
			{
		
			}
		case 2:
			{
				
			}
		case 3:
			{
				
			}
		case 4:
			{
				
			}
		case 5:
			{
				break;
			}
		default:
			{
				printf("You have entered an incorect choice");
			}
		
	}
	void insert(int n)
	{
		
	}
	
}

