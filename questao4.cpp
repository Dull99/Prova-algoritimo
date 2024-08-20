#include <stdio.h>

int main(void)
{
    int centavos;
    
    // Solicita ao usuário um número inteiro maior que 0
    do
    {
        printf("Troco devido: ");
        scanf("%d", &centavos);
    }
    while (centavos <= 0);
    
    

    int troco = 0;

    // Calcula o número de moedas de 25 centavos
    
    troco += centavos / 25;
    centavos %= 25;

    // Calcula o número de moedas de 10 centavos]
    
    troco += centavos / 10;
    centavos %= 10;

    // Calcula o número de moedas de 5 centavos
    
    troco += centavos / 5;
    centavos %= 5;

    // Calcula o número de moedas de 1 centavo
    troco += centavos;

    // Exibe o número mínimo de moedas
    printf("%d\n", troco);

    return 0;
}
// Peça ao usuário o troco devido, em centavos

      // Calcule quantas moedas de vinte e cinco centavos você deve dar ao cliente
      // Subtraia o valor dessas moedas de vinte e cinco centavos dos centavos

      // Calcule quantas moedas de dez centavos você deve dar ao cliente
      // Subtraia o valor dessas moedas de dez centavos dos centavos restantes

      // Calcule quantas moedas de cinco centavos você deve dar ao cliente
      // Subtraia o valor dessas moedas de cinco centavos dos centavos restantes

      // Calcule quantas moedas de um centavo você deve dar ao cliente
      // Subtraia o valor dessas moedas de um centavo dos centavos restantes

      // Some o número de moedas de vinte e cinco centavos, dez centavos, cinco centavos e um centavo usadas
      // Imprima essa soma
