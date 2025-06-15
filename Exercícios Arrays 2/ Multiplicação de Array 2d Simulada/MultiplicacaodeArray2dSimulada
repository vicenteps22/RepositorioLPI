#include <stdio.h>

int main() {

    int vetor1[6] = {1, 2, 3, 4, 5, 6};         
    int vetor2[8] = {1, 2, 3, 4, 5, 6, 7, 8};  
    int resultado[12];                         

    // Matriz 1: 3x2
    // Matriz 2: 2x4
    int linhas1 = 3, colunas1 = 2;
    int linhas2 = 2, colunas2 = 4;

    // Multiplicação de matrizes
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            resultado[i * colunas2 + j] = 0;
            for (int k = 0; k < colunas1; k++) {
                resultado[i * colunas2 + j] += 
                    vetor1[i * colunas1 + k] * vetor2[k * colunas2 + j];
            }
        }
    }

    // Exibindo o resultado
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%4d ", resultado[i * colunas2 + j]);
        }
        printf("\n");
    }

    return 0;
}
