#include <stdio.h>
#include <ctype.h>
#include <string.h>
 //definidno os valores das letra
 
 int get_scrabble_pont(char letra){
 	letra = toupper (letra);
 	
 	switch(letra){
 		case 'A': case'E': case'I': case'L': case'N': case'O': case'R': case'S': case'T': case'U':
 			return 1;
 			case'D': case'G':
 				return 2;
 				case'B': case 'C': case'M': case'P':
				 return 3;
				 case'F': case'H': case'V': case'W': case'Y':
				 	return 4;
				 	case'K':
				 		return 5;
				 		case'J': case'X':
				 			return 8;
				 			case'Q': case'Z':
				 				return 10;
				 				
				 				return 0;
	 }
 }
 
 //funcao para calcular pontuacao da palavra
 
 int computa_ponto(char palavra[]){
 	int pontuacao=0;
 	int n;
 	for(int i = 0, n = strlen(palavra); i < n; i++){
 	pontuacao += get_scrabble_pont(palavra[i]);
	 }
	 return pontuacao;
 }
 
 int main(void){
 	
 	char palavra1 [50];
 	char palavra2[50];
 	
 	//insirindo as palavras dos jogadores
 	printf("Digite sua palavra\n\n");
 	
 	printf("Digite a palavra do jogador 1:\n");
 	scanf("%s", palavra1);
 		printf("Digite a palavra do jogador 2:\n");
 	scanf("%s", palavra2);
 	
 	//calcula pontuacao de cada palavra
 	
 	int pontuacao1 = computa_ponto(palavra1);
 	int pontuacao2 = computa_ponto(palavra2);
 	
 	if(pontuacao1>pontuacao2){
 		printf("Jogador 1 venceu!\n");
	 }else if(pontuacao2>pontuacao1){
	printf("Jogador 2 venceu!\n");
	 }else{
	 	printf("Empate!\n");
	 }
 	
 	return 0;
 }
