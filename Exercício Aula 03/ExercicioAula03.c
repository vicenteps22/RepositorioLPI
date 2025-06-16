#include <stdio.h>

int main()
{
    // Os tipos básicos da linguagem C e a declaração e inicialização das variáveis
    
    int var1;
    var1 = 12;
    
    float var2, resp;
    var2 = 8.45, resp = 0;
    
    double var3;
    var3 = 6.5674;
    
    char letra;
    letra = 'A';
    
    // Tamanho em bytes de cada tipo básico usando o operador sizeof
    
    printf("Int: %d bytes\n", sizeof(var1));
    
    printf("\nFloat: %d bytes\n", sizeof(var2));
    
    printf("\nDouble: %d bytes\n", sizeof(var3));
    
    printf("\nChar: %d bytes\n", sizeof(letra));
    
    // Precedência do cálculo sem parênteses
    
    printf("\n12 X 8,45 - 6,5674 / 3 = %f\n", resp = var1 * var2 - var3 / 3);

    // Precedência do cálculo com parênteses
    
    printf("\n[12 X (8,45 - 6,5674)] / 3 = %f\n", resp = (var1 * (var2 - var3))/ 3);

    return 0;
}
