#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	char pergunta;

	printf("=================================\n");
	printf("|      JOGO DA ADIVINHA��O      |\n");
	printf("=================================\n");
	printf("\n1. Pense em um numero de 1 a 8.\n"); 
	printf("\n2. Responda as 3 perguntas.\n");
	printf("\n3. Responda as perguntas com 'S' ou 'N'\n");
	printf("\n4. Logo ap�s, irei adivinhar seu numero! \n");
	printf("\n=========================================\n");
	printf("\nO seu numero � menor que 5? : ");
	scanf("%c", &pergunta);
	fflush(stdin);
	
	if (pergunta == 's' || pergunta == 'S'){
		printf("O seu numero � maior que 2? : ");
		scanf("%c", &pergunta);
		fflush(stdin);
		if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero � um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
			if (pergunta == 'n' || pergunta == 'N'){
				printf("O numero que voc� pensou � o numero 1 !");
			}
			else
			printf("O numero que voc� pensou � o numero 2 ! ");	
		}	
		else if (pergunta == 's' || pergunta == 'S'){
			printf("O seu numero, � um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
			if (pergunta == 's' || pergunta == 'S'){
				printf("O seu numero � o numero 4! ");
			}
			else
			printf("O numero que voc� pensou � o numero 3 ! ");	
		}
	}
	else if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero � maior que 6 ? : ");
			scanf("%c", &pergunta);
			fflush(stdin);
		
			if (pergunta == 'n' || pergunta == 'N'){
			printf("O seu numero � um numero par? : ");
			scanf("%c", &pergunta);
			fflush(stdin);	
		
			if(pergunta == 's' || pergunta == 'S'){
				printf("O numero que voc� pensou � o numero 6 !");
			}
			else
			printf("O numero que voc� pensou � o numero 5 ! ");
		}
			else if (pergunta == 's' || pergunta == 'S'){
				printf("O seu numero � um numero par ? : ");
				scanf("%c", &pergunta);
				fflush(stdin);
				if (pergunta == 's' || pergunta == 'S'){
					printf("O numero que voc� pensou � o numero 8 ! ");
				}
				else
				printf("O numero que voc� pensou � o numero 7 ! ");	
		}
	}
}	
