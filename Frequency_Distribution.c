# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int main()
{
    int max, min, n, intervalo, amplitude;
    printf("Digite maximo, minimo e numero de amostras:");
    scanf("%d %d %d", &max, &min, &n);
    amplitude = max - min;
    n = sqrt(n);
    intervalo = amplitude/n;
    if(n % 2 == 0)
        n = n-1;
    printf("Intervalo: %d\nClasses: %d", intervalo+1, n);

    return 0;
}
