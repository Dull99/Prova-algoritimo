#include <stdio.h>
int soma_array(int array[], int tamanho);
int main(){
	int n;
	int soma=0;
	
	
	//rebendo o tamanho do array.
	printf("Digite o tamanho do array:\n");
	scanf("%d", &n);
	 
	 int array[n];
	 
	 // lendo os numeros do array.
	 printf("Digite os numeros inteiros\n");
	 
	for(int i=0; i<n; i++){
		printf("Digite o %d numero:\n", i+1);
		scanf("%d", &array[i]);		
	}
	//calcula a soma
	printf("\n");
	for(int i=0; i<n; i++){
		printf("%d\n", array[i]);
		soma= soma + array[i];
	}
	//imprime a soma dos elementos do array
	    printf("\n");
		printf("A soma dos elementos do array e: %d\n", soma);
	
	
	
	return 0;
}
