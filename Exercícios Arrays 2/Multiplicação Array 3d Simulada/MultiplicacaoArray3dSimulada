#include <stdio.h>
 // A lógica do index transforma as coordenadas 3D em um índice 1D.
#define INDEX(i, j, k, J, K) ((i)*(J)*(K) + (j)*(K) + (k))
/*i: o índice da primeira dimensão.
j: o índice da segunda dimensão.
k: o índice da terceira dimensão.
J: o tamanho da segunda dimensão.
K: o tamanho da terceira dimensão.*/

int main() {
    // Representar os arrays 3D como arrays 1D
    int vetor1[2 * 2 * 1] = {
        1, 2,  // matriz 1
        3, 4   // matriz 2
    };

    int vetor2[2 * 1 * 2] = {
        1, 3,  // matriz 1
        4, 5   // matriz 2
    };

    int resultado[2 * 2 * 2] = {0};

    // Multiplicação
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                int soma = 0;
                for (int l = 0; l < 1; l++) {
                    int a = vetor1[INDEX(i, j, l, 2, 1)];
                    int b = vetor2[INDEX(i, l, k, 1, 2)];
                    soma += a * b;
                }
                resultado[INDEX(i, j, k, 2, 2)] = soma;
            }
        }
    }

    // Impressão do resultado
    for (int i = 0; i < 2; i++) {
        printf("Matriz %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%4d ", resultado[INDEX(i, j, k, 2, 2)]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
