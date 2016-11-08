# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int compara(const void *p1, const void *p2)
{
    int *i = (int *)p1, *j = (int *)p2;

    if( *i < *j )
        return -1;
    else
        if( *i == *j )
            return 0;
        else
            return 1;
}

int main()
{
    int i, num[ 10 ] = { 2, 1, 6, 5, 8, 7, 9, 6, 2, 0 } ;

    printf( “Matriz original: ” ) ;
    for (i=0; i<10; i++)
        printf( “%d ”, num[ i ] ) ;
    qsort( num, 10, sizeof( int ), comp ) ;
    printf( “\n\nMatriz ordenada: ” ) ;
    for (i=0; i<10; i++)
        printf( “%d ”, num[ i ] ) ;


    return 0;
}
