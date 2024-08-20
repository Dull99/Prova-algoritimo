#include <stdio.h>
#include <math.h>

int main(){
	int A,B,C;
	
	while(1){
		//l  os valores de A,B,C.
		printf("Digite o lado-comprimento-percentual maximo:\n");
		scanf("%d %d %d", &A,&B,&C);
		
		if(A==0 && B==0 && C==0){
			break;
		}
		//calcula a area com metros quadrados
		int area_casa = A*B;
		double lado_terreno = sqrt((double)area_casa *100 /C);
		
		//imprime o lado do terreno truncado
		int lado_terreno_truncado = (int) lado_terreno;
		printf("\n");
		printf("%d\n", lado_terreno_truncado);
		printf("\n");
	}
	return 0;
}
