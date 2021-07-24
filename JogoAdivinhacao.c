#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char pergunta;

	printf("=================================\n");
	printf("|      JOGO DA ADIVINHAÇÃO      |\n");
	printf("=================================\n");
	printf("\n1. Pense em um numero de 1 a 8.\n"); 
	printf("\n2. Responda as 3 perguntas.\n");
	printf("\n3. Responda as perguntas com 'S' ou 'N'\n");
	printf("\n4. Logo após, irei adivinhar seu numero! \n");
	printf("\n=========================================\n");
	printf("\nO seu numero é menor que 5? : ");
	scanf("%c", &pergunta);
	fflush(stdin);
	
	if (pergunta == 's' || pergunta == 'S'){
		printf("O seu numero é maior que 2? : ");
		scanf("%c", &pergunta);
		fflush(stdin);
		if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero é um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
			if (pergunta == 'n' || pergunta == 'N'){
				printf("O numero que você pensou é o numero 1 !");
			}
			else
			printf("O numero que você pensou é o numero 2 ! ");	
		}	
		else if (pergunta == 's' || pergunta == 'S'){
			printf("O seu numero, é um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
			if (pergunta == 's' || pergunta == 'S'){
				printf("O seu numero é o numero 4! ");
			}
			else
			printf("O numero que você pensou é o numero 3 ! ");	
		}
	}
	else if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero é maior que 6 ? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
		
			if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero é um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);	
		
			if(pergunta == 's' || pergunta == 'S'){
				printf("O numero que você pensou é o numero 6 !");
			}
			else
			printf("O numero que você pensou é o numero 5 ! ");
		}
			else if (pergunta == 's' || pergunta == 'S'){
				printf("O seu numero é um numero par ? : ");
				scanf("%c", &pergunta);
				fflush(stdin);
				if (pergunta == 's' || pergunta == 'S'){
					printf("O numero que você pensou é o numero 8 ! ");
				}
				else
				printf("O numero que você pensou é o numero 7 ! ");	
		}
	}
}	
