#include <stdio.h>

int main()
{

// Declaração das variáveis inteiras
    
    int var1 = 0, var2 = 0, resp = 0;
    
    var1 = 100;
    
    printf("Variável inteiro: %i\n", var1);
    
// O valor atribuído à uma variável também pode ser uma operação numérica

    var1 = 100 + 200;
    
    printf("\nVariável inteiro: %i\n", var1);
    
// O operador += atribui à variável seu próprio valor mais um outro valor, ou seja, ao invés de var1 = var1 + 300 pode ser utilizado o +=
    
    var1 = 100;
    var1 += 300;
    
    printf("\nVariável inteiro: %i\n", var1);
    
// O ++ é um operador de incremento usado para adicionar 1 ao valor de uma variável

    var1 = 100;
    var1++;
   
    printf("\nVariável inteiro: %i\n", var1);
    
// Quando o operador está à esquerda ele incrementa 1 na variável e retorna a variável incrementada

    var1 = 100;
    
    printf("\nVariável inteiro: %i\n", ++var1);

// Quando o operador está à direita a variável só é incrementada após a execução em uma expressão

    var1 = 100;
    
    printf("\nVariável inteiro: %i\n", var1++);
    printf("Variável inteiro: %i\n", var1);
    
// O operador "sizeof" é usado no printf e retorna o número de bytes ocupado por um tipo de variável

    printf("\nVariável inteiro: %li bytes\n", sizeof(var1));
    
// Os resultados dos cálculos de variáveis podem ser armazenados em uma outra variável já declarada anteriormente

    var1 = 100;
    var2 = 200;

    resp = var1 + var2;
    
    printf("\nVariável inteiro: %i\n", resp);
    
// O = é um operador de atribuição e quando for utilizado o valor do operando à direita será atribuido ao valor do operando á esquerda 
    
    int a = 0, b = 0, c = 0;
    
    a = 1000;
    b = 10;
    c = 100;
    
    a = b + c;
    
    printf("\nVariável inteiro: %i\n", a);
    
    return 0;
}
