#include<stdio.h>
#include<stdlib.h>
int main ( void )
{
    int i, j, n, a, b;

    int ( * ( * p ) [] ) [];

    printf ( "Enter the size of the matrix in the form aXb" );

    scanf ( "%dX%d", &a, &b );

    p = malloc ( b * sizeof ( int ( * ) [] ) );

    for ( i = 0;i < b;i++ ) {
        ( *p ) [i] = malloc ( a * sizeof ( int ) );
        printf ( "Enter Column %d", i+1 );
        for ( j = 0;j < a;j++ )
            scanf ( "%d", & ( * ( *p ) [i] ) [j] );
    }


    return 0;
}
