#include <stdio.h>
#include <string.h>
#include <ctype.h>

void mostrarPainel(char painel[4][4]) {
    printf("\nPainel das Palavras Cruzadas:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%c\t", painel[i][j]);
        }
        printf("\n");
    }
}

int checarTentativa(char tentativa[4], char linha, char coluna, char direcao) {
    
    char resposta1[] = "GAS";
    char resposta2[] = "GIZ";
    char resposta3[] = "ZEN";

    direcao = toupper(direcao);

    for (int i = 0; tentativa[i] != '\0'; i++) {
        tentativa[i] = toupper(tentativa[i]);
    }

    if ((strcmp(tentativa, resposta1) == 0) && linha == '1' && coluna == '1' && direcao == 'H') {
        return 0;
    } else if ((strcmp(tentativa, resposta2)) == 0 && linha == '1' && coluna == '1' && direcao == 'V') {
        return 0;
    } else if ((strcmp(tentativa, resposta3)) == 0 && linha == '3' && coluna == '1' && direcao == 'H') {
        return 0;
    } else {
        return 1;
    }
}

int main(){

    // Painel de palavras cruzadas
    char palavra[4][4] = {
    {' ', '1', '2', '3'},
    {'1', '_', '_', '_'},
    {'2', '_', 'X', 'X'},
    {'3', '_', '_', '_'}
    };

    // Gabarito do jogo de palavras cruzadas
    char gabarito[4][4] = {
    {' ', '1', '2', '3'},
    {'1', 'G', 'A', 'S'},
    {'2', 'I', '-', '-'},
    {'3', 'Z', 'E', 'N'}
    };

    // Respostas do usuário
    char tentativa[4];

    printf ("Caça Palavras\n");

    // Dicas para as palavras
    // O primeiro  número é a linha, o segundo é a coluna e a letra H ou V indica horizontal ou vertical
    printf("Dicas:\n");
    printf("1.1 H - Estado da matéria\n");
    printf("1.1 V - Usado para escrever no quadro\n");
    printf("3.1 H - Calmo\n");

    // Chamada da função para mostrar o painel
    mostrarPainel(palavra);

    char linha, coluna, direcao;
    int checagem, acertos = 0;

    // Loop para receber as respostas do usuário
    // O jogo termina quando o usuário acertar todas as palavras
    // O usuário deve informar a linha, coluna, direção (H ou V) e a tentativa de resposta
    do {
        printf("\nDigite a linha, coluna, direção (H/V) e a tentativa:\n");
        scanf(" %c %c %c", &linha, &coluna, &direcao);
        getchar();
        fgets(tentativa, sizeof(tentativa), stdin);
        tentativa[strcspn(tentativa, "\n")] = '\0';
        // Verifica se a tentativa está correta
        checagem = checarTentativa(tentativa, linha, coluna, direcao);
        // Se a tentativa estiver correta, incrementa o contador de acertos
        if (checagem == 0){
            ++acertos;
        }
    } while( acertos < 3 );

    mostrarPainel(gabarito);

    printf("\nVocê encontrou todas as palavras!\n");

    return 0;
}


