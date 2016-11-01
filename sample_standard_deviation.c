# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int cont,vetor[10], media, desvio = 0;

    printf("Type values:");
    for(cont = 0; cont < 10;cont++)
        scanf("%d", &vetor[cont]);
    for(cont = 0; cont < 10; cont++)
        media = media + vetor[cont];
    media = media/ 10;
    for(cont = 0;cont< 10;cont++)
    {
        if(media <= vetor[cont])
            desvio = desvio + ((vetor[cont] - media)*(vetor[cont] - media));
        else
            desvio = desvio + ((vetor[cont] - media)*(-1))*((vetor[cont] - media)*(-1));
    }

    desvio = desvio/10;
        printf("Sample standard deviation: %d\n", desvio);

    return 0;
}
