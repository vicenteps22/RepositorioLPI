#include <stdio.h>

int main() {
    int x = 2; // profundidade
    int y = 3; // linhas
    int z = 4; // colunas

    // Array 1D para simular o array 3D
    int array[x * y * z];

    // Preenchendo o array 1D com valores baseados em suas coordenadas 3D
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                // A lógica do index transforma as coordenadas 3D em um índice 1D.
                int index = i * y * z + j * z + k;
                array[index] = index;
            }
        }
    }

    // Imprimindo o array como se fosse 3D
    for (int i = 0; i < x; i++) {
        printf("Matriz %d:\n", i + 1);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                int index = i * y * z + j * z + k;
                printf("%4d ", array[index]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
