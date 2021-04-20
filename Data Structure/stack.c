#include<stdio.h>
int stack[100],top=-1;
void push(int);
void pop();
void traverse();
void main()
{
	int choice,capacity;
	printf("\nHere we are doing some operation on stack");
	printf("\nEnter the size of the stack : ");
	scanf("%d",&capacity);
	do
	{
		printf("\n\t1.PUSH\n\t2.POP\n\t3.PRINT\n\t4.EXIT");
		printf("\nNow enter your choice : ");
		scanf("%d",&choice);
		switch (choice)
			{
				case 1 : 
				{	
					
					push(capacity);
					break;
				}
				case 2 : 
				{
					pop();
					break;
				}
				case 3 : 
				{
					traverse();
					break;	
				}
				case 4 : 
				{
					
					break;
				}
				default : 
				{
					printf("\nYou have entered a invalid input\n");
					break;
				}
			}
	}
	while(choice!=4);
	
}
void push(int capacity)
{	
	if(top==(capacity-1))
		printf("\nThe satck is full.\n");
	else
	{
		int n;
		printf("\nNow enter the value that you want to push : ");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		printf("\n%d element is successfully added.\n",n);
	}
	
}
void pop()
{
	if(top==-1)
		printf("\nThe satck is empty.\n");
	else
	{
		printf("\n%d element is successfully deleted.\n",stack[top]);
		top--;
	}
}
void traverse()
{
	int i;
	if(top==-1)
		printf("\nThe satck is empty.\n");
	else
	{
		printf("\nThe elements of the stack are : ");
		for(i=top;i>=0;i--)
			printf("\n\t%d",stack[i]);
		printf("\n");
	}
}

