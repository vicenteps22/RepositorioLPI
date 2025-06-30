#include <stdio.h>
#define TAMANHO 1000

int main() {

    // A quantidade de elementos nos arrays depende da quantidade de memória

    long int soma = 0;
    int array2D[TAMANHO][TAMANHO]; 

    // O máximo de elementos em um array bidimensional que eu consegui executar foram 1.000.000
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            array2D[i][j] = i * j;
            soma += array2D[i][j];
            printf("array2D[%d]*[%d]\n", i, j);
        }
    }
         
    printf("Soma: %ld\n", soma);

    return 0;
}
