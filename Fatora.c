# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int Fatora(int N)
{
    int cont;

    for(cont = N-1;cont > 1;cont--)
        N = N*(cont);

    return N;
}
