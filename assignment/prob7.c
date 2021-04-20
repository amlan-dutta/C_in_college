#include <stdio.h>
void swap(int *n1, int *n2);

int main()
{	
	int num1,num2;
	printf("Enter two nubers");
    scanf("%d %d",&num1,&num2);
    swap( &num1, &num2);
    printf("After swaping\n");
    printf("Number1 = %d\n", num1);
    printf("Number2 = %d", num2);
    getch();
}

void swap(int * n1, int * n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
