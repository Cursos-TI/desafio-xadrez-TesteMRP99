#include<stdio.h>
	int main(){
		int torre, bispo, rainha; //declaração de variavel para cada peça do xadrez
		int jogada = 1; // variavel par determinar o numero de movimentos de cada peça
		
		printf("		Bem-Vindo ao Xadrez Virtual Estacio!\n");
		printf("Mapa dos movimentos das peças: Torre, Bispo e Rainha\n");
		printf("Estes foram os movimentos da Torre: \n");
		
			for (torre = 1; torre <= 5; torre++){ //looping para determinar a quantidade de jogadas da torre
				printf("%d° Movimento: ", jogada);
				jogada++; //incremento da variavel jogada para seguir o numero de jogadas da peça
				printf("Direita\n"); //saida com o movimento da peça	
			}
			
			printf("Estes foram os movimentos do Bispo: \n");
				bispo = 1;
				jogada = 1;
				while (bispo <= 5){ //looping para determinar a quantidade de jogadas do bispo
					printf("%d° Movimento: ", jogada);
					printf("Cima, Direita\n");
					bispo++; //incremento da variavel bispo para seguir a próxima jogada
					jogada++; //incremento da variavel jogada para seguir o numero de jogadas da peça
				}
			
			printf("Estes foram os movimentos da Rainha: \n");
			jogada = 1;
			rainha = 1;
			do {
				printf("%d° Movimento: ", jogada);
				printf("Esquerda\n");
					rainha++; 	//incremento da variavel bispo para seguir a próxima jogada
					jogada++;	//incremento da variavel jogada para seguir o numero de jogadas da peça
			} while(rainha <= 8); //looping para determinar a quantidade de jogadas da rainha
			
	}
