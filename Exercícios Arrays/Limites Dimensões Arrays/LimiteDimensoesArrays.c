#include <stdio.h>
#define TAMANHO 10

int main() {

    // A quantidade de dimensões dos arrays dependem da quantidade de memória

    long int soma = 0;
    int array6D[TAMANHO][TAMANHO][TAMANHO][TAMANHO][TAMANHO][TAMANHO];   

    // O máximo de dimensões que conseguiram ser executadas foram 6 com 10 elementos cada
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            for(int k = 0; k < TAMANHO; k++) {
                for(int l = 0; l < TAMANHO; l++) {
                    for(int m = 0; m < TAMANHO; m++) {
                        for(int n = 0; n < TAMANHO; n++) {
                            array6D[i][j][k][l][m][n] = i * j * k * l * m * n;
                            soma+=array6D[i][j][k][l][m][n];
                            printf("array6D[%d]*[%d]*[%d]*[%d]*[%d]*[%d]\n", i, j, k, l, m, n);
                        }
                    }
                }
            }
        }
    }
 
    printf("Soma: %ld\n", soma);

    return 0;
}
