#define N 50
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    int i = 0;
    char frase[N];

    // A função isdigit verifica se o caractere é um dígito (0-9)
    
    char a = '1';
    if(isdigit(a)) {
        printf("O caractere '%c' é um dígito.\n", a);
    } else {
        printf("O caractere '%c' não é um dígito.\n", a);
    }
    
    // A função isalpha verifica se o caractere é uma letra (a-z, A-Z)
    char b = 'a';
    if(isalpha(b)) {
        printf("O caractere '%c' é uma letra.\n", b);
    } else {
        printf("O caractere '%c' não é uma letra.\n", b);
    }
    
    char c = 'Z';
    // A função isalnum verifica se o caractere é alfanumérico (dígito ou letra)
    if(isalnum(a) && isalnum(c)) {
        printf("Os caracteres '%c' e '%c' são alfanuméricos.\n", a, c);
    } else {
        printf("Os caracteres '%c' e '%c' não são alfanuméricos.\n", a, c);
    }

    // A função isspace verifica se o caractere é um espaço em branco
    char d = ' ';
    if(isspace(d)) {
        printf("O caractere '%c' é um espaço em branco.\n", d);
    } else {
        printf("O caractere '%c' não é um espaço em branco.\n", d);
    }

    // A função islower verifica se o caractere é uma letra minúscula 
    char e = 'b';
    if(islower(e)) {
        printf("O caractere '%c' é uma letra minúscula.\n", e);
    } else {
        printf("O caractere '%c' não é uma letra minúscula.\n", e);
    }

    // A função isupper verifica se o caractere é uma letra maiúscula
    char f = 'B';
    if(isupper(f)) {
        printf("O caractere '%c' é uma letra maiúscula.\n", f);
    } else {
        printf("O caractere '%c' não é uma letra maiúscula.\n", f);
    }

    // A função tolower converte uma letra maiúscula para minúscula
    char g = 'A';
    if(isupper(g)) {
        printf("Convertendo '%c para minúscula: '%c'.\n", g, tolower(g));
    } else {
        printf("O caractere '%c' não é uma letra maiúscula.\n", g);
    }

    // A função toupper converte uma letra minúscula para maiúscula
    char h = 'a';
    if(islower(g)) {
        printf("Convertendo '%c para maiúscula: '%c'.\n", h, toupper(h));
    } else {
        printf("O caractere '%c' não é uma letra maiúscula.\n", h);
    }

    // A função atoi converte uma string para um inteiro
    char str1[] = "12345";
    int num1 = atoi(str1);
    printf("String %s para inteiro: %d\n", str1, num1);

    // A função atof converte uma string para um float
    char str2[] = "12.34";
    float num2 = atof(str2);
    printf("String %s para float: %.2f\n", str2, num2);

    // A função strcpy copia uma string para outra
    char str3[] = "Ola, Mundo!";
    char str4[] = "Boa Noite!";
    printf("String original: %s\n", str4);
    strcpy(str4, str3);
    printf("Copiando string para '%s'\n", str4);

    // A função strcat concatena duas strings
    char str5[] = "Ola, ";
    char str6[] = "Mundo!";
    strcat(str5, str6);
    printf("Concatenando strings: %s\n", str5);

    
    char str7[] = "ola ,mundo!";
    int result = strcmp(str5, str7);
    if (result == 0) {
        printf("As strings '%s' e '%s' são iguais.\n", str5, str7);
    } else if (result < 0) {
        printf("A string '%s' é menor que '%s'.\n", str5, str7);
    } else {
        printf("A string '%s' é maior que '%s'.\n", str5, str7);
    }

    printf("Tamanho da string '%s' caracteres: %zu\n", str5, strlen(str5));

}
