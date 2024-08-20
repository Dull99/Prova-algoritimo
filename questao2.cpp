#include <stdio.h>

int main() {
    int n;

    // Lê o tamanho das matrizes
    printf("Digite o tamanho das matrizes (n):\n ");
    scanf("%d", &n);

    // Declara as matrizes
    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    // Lê a primeira matriz
    printf("Digite os elementos da primeira matriz (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Lê a segunda matriz
    printf("Digite os elementos da segunda matriz (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    
    // Imprime a matriz resultante
    printf("Resultado da multiplicacao das matrizes:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           resultado[i][j]=0;
		for(int k=0; k<n; k++){
			resultado[i][j]+= matriz1[i][k]*matriz2[k][j];
			printf("Resultado da linha %d * coluna %d = %d\n", i, j, resultado[i][j]);
		}
	}
}
        printf("\n");
        
        return 0;
    }

    


