#define N 10
#include <stdio.h>

int main()
{
    char cor1[N];
    int i = 0;

    printf("Digite uma cor: ");
    scanf("%s", cor1);
    printf("Cor: %s\n", cor1);

    while(cor1[i] != '\0') 
    printf("%c\n", cor1[i++]);

    char frase[N];
    int j = 0;

    printf("Digite uma frase: ");
    gets(frase);

    printf("Você digitou:\n");
    while(frase[j] != '\0')
        if (frase[j++] != ' ') 
            putchar(frase[j-1]);
            else
            putchar('\n');
        printf("\n");

    return 0;
}
