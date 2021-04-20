#include <stdio.h>
int main()
{
    int rows, ele= 1, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");

        for(j=0; j <= i; j++)
        {
           
			ele = ele*(i-j+1)/j;
			
			printf("%4d", ele);
        }
        printf("\n");
    }

    getch();
	/* if(j==0 || j==i)
				ele = 1;
			else */
}