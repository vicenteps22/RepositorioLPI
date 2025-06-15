#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5000

// Função para verificar se um número já foi adicionado ao array
int repetido(int num, int array[], int preenchido) {
    for (int i = 0; i < preenchido; i++) {
        if (num == array[i]) {
            return 1;
        }
    }
    return 0;
}

// Função para ordenar o array usando o método de ordenação por seleção
void ordenarArray(int array[]) {
    int temp;
    for (int i = 0; i < TAMANHO - 1; i++) {
        for (int j = i + 1; j < TAMANHO; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {

    srand((unsigned)time(NULL)); 

    int array[TAMANHO], num, i = 0;
    clock_t inicio, fim;
    double tempo;

    // Começo da contagem do tempo de execução
    inicio = clock();

    // Preenchendo o array com números aleatórios únicos
    while (i < TAMANHO) {
        num = (rand() % TAMANHO) + 1;
        // Verifica se o número já foi adicionado ao array
        if (repetido(num, array, i) == 0) {
            array[i] = num;
            i++;
        }
    }

    // Ordenando o array
    ordenarArray(array);

    // Imprimindo os valores ordenados
    for (i = 0; i < TAMANHO; i++) {
        printf("%d\n", array[i]);
    }

    // Fim da contagem do tempo de execução
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("Tempo de execução: %.5f segundos\n", tempo);

    return 0;
}
