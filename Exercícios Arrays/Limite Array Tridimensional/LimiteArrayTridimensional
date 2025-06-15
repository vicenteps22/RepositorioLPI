#include <stdio.h>
#define TAMANHO 100

int main() {

    // A quantidade de elementos nos arrays depende da quantidade de memória

    long int soma = 0;
    int array3D[TAMANHO][TAMANHO][TAMANHO]; 

    // O máximo de elementos em um array tridimensional que eu consegui executar foram 1.000.000
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            for(int k = 0; k < TAMANHO; k++) {
                array3D[i][j][k] = i * j * k;
                soma += array3D[i][j][k];
                printf("array3D[%d]*[%d]*[%d]\n", i, j, k);
            }
        }
    }
         
    printf("Soma: %ld\n", soma);

    return 0;
}
