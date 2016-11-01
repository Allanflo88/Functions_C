# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int vetor[20], cont, aux, troca = 1;

    for(cont = 0; cont <= 19; cont++)
        scanf("%d", &vetor[cont]);
    while(troca == 1)
    {
        troca=0;
        for(cont = 0; cont < 20;cont++)
        {
            if(vetor[cont] > vetor[cont+1])
            {
                aux = vetor[cont];
                vetor[cont]= vetor[cont+1];
                vetor[cont+1]= aux;
                troca = 1;
            }

        }
    }
    for(cont = 0;cont < 20; cont++)
        printf("%d\n", vetor[cont]);

    return 0;
}
