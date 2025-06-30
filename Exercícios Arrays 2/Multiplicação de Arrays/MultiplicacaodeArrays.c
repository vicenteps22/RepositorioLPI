#include <stdio.h>

int main(){

    // Definindo duas matrizes para multiplicação
    int vetor1[3][2] = {{1,2},{3,4},{5,6}};
    int vetor2[2][4] = {{1,2,3,4}, {5,6,7,8}};
    int resultado1[3][4];

    // Multiplicação de matrizes
    printf("Multiplicação de Matrizes 2D:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            resultado1[i][j] = 0; 
            for (int k = 0; k < 2; k++) {
                resultado1[i][j] += vetor1[i][k] * vetor2[k][j];
            }
        }
    }
    
    // Exibindo o resultado
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", resultado1[i][j]);
        }
        printf("\n");
    }

    // Definindo duas matrizes 3D para multiplicação
    int vetor3[2][2][1] = {
        { {1}, {2} },
        { {3} ,{4} }
    };

    int vetor4[2][1][2] = {
        { {1, 3} },
        { {4, 5} }
    };

    int resultado2[2][2][2];

    // Multiplicação de matrizes 3D
    /* A multiplicação de matrizes 3D é feita como se fossem matrizes 2D,
    mas considerando que cada "matriz" é um conjunto de duas matrizes 2D.*/

    for (int n = 0; n < 2; n++) {   // n representa o índice do array 3D
        for (int i = 0; i < 2; i++) {   // i representa a linha da matriz resultante
            for (int j = 0; j < 2; j++) {   // j representa a coluna da matriz resultante
                resultado2[n][i][j] = 0;
                for (int k = 0; k < 1; k++) {   // k representa o índice de multiplicação
                    resultado2[n][i][j] += vetor3[n][i][k] * vetor4[n][k][j];
                }
            }
        }
    }

    // Exibindo o resultado
    printf("\nMultiplicação de Matrizes 3D:\n");
    for (int n = 0; n < 2; n++) {
        printf("Matriz %d:\n", n + 1);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%d ", resultado2[n][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

}
