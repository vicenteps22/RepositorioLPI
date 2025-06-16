#define TAM_R 20
#define TAM_F 6
#define N 5
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j;
    int respostas[TAM_R] = {3, 4, 5, 2, 1, 1, 2, 0, 3, 4,
                             5, 2, 2, 4, 4, 3, 1, 2, 2, 3};
    int frequencias[TAM_F] = {0};

    for(i = 0; i < TAM_R; i++)
        ++frequencias[respostas[i]];
    printf("%s%13s%12s\n", "Nivel", "Frequencia", "Histograma");

    for(i = 0; i < TAM_F; i++) {
        printf("%5d%13d    ", i, frequencias[i]);
        for(j = 0; j < frequencias[i]; j++)
            printf("*");
        printf("\n");
    }

    int k, n[N] = {32, 27, 64, 18, 95}, soma = 0;

    for(k = 0; k < N; k++)
        soma += n[k];

    printf("%s%13s\n", "Elemento", "Valor");
    for(k = 0; k < N; k++)
        printf("%7d%13d\n", k, n[k]);

    printf("Soma: %d\n", soma);

    return 0;
}
