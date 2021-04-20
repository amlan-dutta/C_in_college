#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,a,b;
	int (*(*ptr )[])[];
	
	printf("Enter the size of 2D matrix(row X coloum)");
	scanf("%dX%d",&b,&a);
	ptr = malloc ( b * sizeof ( int ( * ) [] ) );
	for ( i = 0;i < b;i++ ) {
        ( *ptr ) [i] = malloc ( a * sizeof ( int ) );
        printf ( "Enter row %d\n", i+1 );
        for ( j = 0;j < a;j++ )
            scanf ( "%d", & ( * ( *ptr ) [i] ) [j] );
    }
	for(i=0;i<b;i++)
	{
		for (j=0;j<a;j++)
		{
			printf("%d\t",( * ( *ptr )[i] )[j]);
		}
		printf("\n");
	}
	getch();
}
