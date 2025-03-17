#include<stdio.h>
	int main(){
		int torre, bispo, rainha, cavalo; //declaração de variavel para cada peça do xadrex
		int jogada = 1; // variavel par determinar o numero de movimentos de cada peça
		
		printf("		Bem Vindo ao Xadrez Virtual Estacio!\n");
		printf("Mapa dos movimentos das peças: Torre, Bispo, Rainha e Cavalo\n");
		printf("\nEstes foram os movimentos da Torre: \n");
		
			for (torre = 1; torre <= 5; torre++){ //looping para determinar a quantidade de jogadas da torre
				printf("%d° Movimento: ", jogada);
				jogada++; //incremento da variavel jogada para seguir o numero de jogadas da peça
				printf("Direita\n"); //saida com o movimento da peça	
			}
			printf("\n");
			printf("Estes foram os movimentos do Bispo: \n");
				bispo = 1;
				jogada = 1;
				while (bispo <= 5){ //looping para determinar a quantidade de jogadas do bispo
					printf("%d° Movimento: ", jogada);
					printf("Cima, Direita\n");
					bispo++; //incremento da variavel bispo para seguir a próxima jogada
					jogada++; //incremento da variavel jogada para seguir o numero de jogadas da peça
				}
			printf("\n");
			printf("Estes foram os movimentos da Rainha: \n");
			jogada = 1;
			rainha = 1;
			do {
				printf("%d° Movimento: ", jogada);
				printf("Esquerda\n");
					rainha++; 	//incremento da variavel bispo para seguir a próxima jogada
					jogada++;	//incremento da variavel jogada para seguir o numero de jogadas da peça
			} while(rainha <= 8); //looping para determinar a quantidade de jogadas da rainha
				
			printf("\n");
			printf("Estes foram os movimentos do Cavalo: \n");
			jogada = 1;
			int movimento = 1; // variavel para determinar a direção final do movimento do cavalo
			
				while(movimento <= 3) { //
					printf("%d° Movimento: ", jogada); // printando o numero de movimentos do cavalo fora do "FOR" para não somar junto a saida "cima"
					for(cavalo = 0; cavalo < 2; cavalo++){ //condição para que a variavel cavalo apresente apenas 2 repetições
							printf("Cima, ");
			}
				if(movimento % 2 == 0){ //condição para alterar a direção final do movimento do cavalo
					printf("Direita\n");
				}else{
					printf("Esquerda\n");
				}
				movimento++; //incremento da variável movimento, para seguir a próxima jogada
				jogada++; //incremento da variavel jogada para seguir o numero de jogadas da peça
	}
}
