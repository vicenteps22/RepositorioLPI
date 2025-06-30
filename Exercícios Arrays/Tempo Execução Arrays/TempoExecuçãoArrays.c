#include <stdio.h>
#include <time.h>

int main() {
    
    int matriz[1000][500];
    clock_t inicio, fim;
    double tempo1, tempo2;
    long long int soma = 0;

    // Linha - Coluna
    inicio = clock();
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 500; j++){
            matriz[i][j] = i + j * j;
            soma += matriz[i][j];
        }
    }

    fim = clock();
    tempo1 = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Linha - Coluna\n");
    printf("Soma: %lld\n", soma);
    printf("Tempo de execuçao linha e coluna: %.9f segundos\n", tempo1);

    // Coluna - Linha
    soma = 0;
    inicio = clock();
    for (int j = 0; j < 500; j++){
        for (int i = 0; i < 1000; i++){
            matriz[i][j] = i + j * j;
            soma += matriz[i][j];
        }
    }
            
    fim = clock();
    tempo2 = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    printf("Coluna - Linha\n");
    printf("Soma: %lld\n", soma);
    printf("Tempo de execução coluna e linha: %.9f segundos\n", tempo2);

    return 0;
}
