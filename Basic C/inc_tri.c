#include <stdio.h>
void main()
{
    int i, space, rows, j=1, k;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i)
    {
		k=i-1;
        for(space=1; space <= rows-i; space++)
        {
            printf("  ");
        }

		for(j=1;j<=i;j++)
		{
			k=k+1;
			printf("%d ",k);
		}
		for(j=1;j<=i-1;j++)
		{
			k=k-1;
			printf("%d ",k);
		}
		
		printf("\n");
    }
    getch ();
}