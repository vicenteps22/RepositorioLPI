#include <stdio.h>

int main()
{
    printf("\n\tOperadores aritméticos elementares\n");
    
    printf("\nSoma: 100 + 10 = %i\n", 100 + 10);
    
    printf("\nSubtração: 110 - 10 = %i\n", 110 - 10);
    
    printf("\nMultiplicação: 25 x 4 = %i\n", 25 * 4);
    
    printf("\nDivisão: 100 / 4 = %i\n", 100 / 4);
    
    printf("\n\tOrdens de precedências dos operadores aritméticos elementares\n");
    
    printf("\nSem parênteses: 100 * 4 + 20 / 5 / 2 = %i\n", 100 * 4 + 20 / 5 / 2);
    
    printf("\nCom parênteses: {[(100 * 4) + 20] / 5} / 2 = %i\n", (((100 * 4) + 20 ) / 5) / 2);

    return 0; 
}
