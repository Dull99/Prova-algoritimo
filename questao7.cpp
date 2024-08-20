#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Verifica a quantidade de argumentos na linha de comando
    if (argc != 2) {
        printf("Uso: %s key\n", argv[0]); // Retorna mensagem de erro se não for 2
        return 1;
    }

    // Verifica se o argumento é um número
    for (int i = 0; i < strlen(argv[1]); i++) {
        if (!isdigit(argv[1][i])) {
            printf("Uso: %s key\n", argv[0]); // Retorna mensagem de erro se não for número
            return 1;
        }
    }

    // Converte o argumento para inteiro
    int k = atoi(argv[1]);

    // Captura o texto do usuário
    char plaintext[256];
    printf("Texto Simples: ");
    if (fgets(plaintext, sizeof(plaintext), stdin) == NULL) {
        printf("Erro na leitura do texto.\n");
        return 1;
    }

    // Remove o caractere de nova linha do final da string, se houver
    size_t len = strlen(plaintext);
    if (len > 0 && plaintext[len - 1] == '\n') {
        plaintext[len - 1] = '\0';
    }

    // Cifra o texto
    printf("Texto Cifrado: ");
    for (int i = 0; i < strlen(plaintext); i++) {
        if (isupper(plaintext[i])) {
            printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
        } else if (islower(plaintext[i])) {
            printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
        } else {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");

    return 0;
}


