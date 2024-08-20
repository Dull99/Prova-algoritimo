#include <stdio.h>

// Função para calcular a soma dos dígitos de um número
int soma_dos_digitos(long long numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

// Função para verificar se um número de cartão é válido de acordo com o algoritmo de Luhn
bool eh_valido(long long numero_cartao) {
    int soma = 0;
    bool alternar = false;
    while (numero_cartao > 0) {
        int digito = numero_cartao % 10;
        if (alternar) {
            digito *= 2;
            soma += soma_dos_digitos(digito);
        } else {
            soma += digito;
        }
        numero_cartao /= 10;
        alternar = !alternar;
    }
    return soma % 10 == 0;
}

int main() {
    long long numero_cartao;

    // Solicitar o número do cartão
    do {
        printf("Digite o numero do cartao: ");
        scanf("%lld", &numero_cartao);
    } while (numero_cartao <= 0);

    // Verificar a bandeira e a validade
    if (eh_valido(numero_cartao)) {
        int primeiros_dois_digitos = numero_cartao / 100000000000000;
        if (primeiros_dois_digitos >= 34 && primeiros_dois_digitos <= 37) {
            printf("AMEX\n");
        } else if (primeiros_dois_digitos >= 51 && primeiros_dois_digitos <= 55) {
            printf("MASTERCARD\n");
        } else if (primeiros_dois_digitos / 10 == 4) {
            printf("VISA\n");
        } else {
            printf("Inválido\n");
        }
    } else {
        printf("Inválido\n");
    }

    return 0;
}

