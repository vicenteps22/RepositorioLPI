#include <stdio.h>

int main()
{
    
    double peso = 0, altura = 0, imc = 0;
    
    // A função scanf lê a entrada do usuário e guarda os dados em uma variável
    // O operador & indica o endereço de memória de uma variável 

    printf("Entre com seu peso em quilogramas: ");
    scanf("%lf", &peso);
    
    printf("Entre com sua altura em metros: ");
    scanf("%lf", &altura);
    
    printf("Seu peso = %.2lfKg e sua altura = %.2lfm\n", peso, altura);
    
    // Fórmula para descobrir o valor do IMC 
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC = %.2lfKg/m^2\n", imc);
    
    // O comando if e else permite que uma ação seja executada de acordo com as condições especificadas
    
    if ( imc < 18.5 )
        printf("Classificação IMC menor que 18.5 = Magreza\n");
    
    else if ( imc >= 18 && imc < 25 )
        printf("Classificação IMC entre 18.5 e 24.9 = Normal\n");
    
    else if ( imc >= 25 && imc < 30 )
        printf("Classificação IMC entre 25 e 29.9 = Sobrepeso Grau I de Obesidade\n");

    else if ( imc >= 30 && imc < 40 )
        printf("Classificação IMC entre 30 e 39.9 = Obesidade Grau II\n");
    
    else                                                                                                                              
        printf("Classificação IMC maior que 40 = Obesidade Grau III\n");
    
    return 0;
}
