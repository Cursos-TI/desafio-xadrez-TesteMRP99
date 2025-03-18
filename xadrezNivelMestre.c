#include<stdio.h>
	
	
	 //função recursividade para determinar o movimento da Torre
	void moverTorre(int casas){ 
		if (casas > 0){
			printf("Direita\n");
			moverTorre(casas - 1);
		}
	}
	 //função loops aninhados para determinar os movimentos do Bispo
		void moverBispo(int casas) {
   			for (int i = 1; i <= casas; i++) {
       			for (int j = 1; j <= casas; j++) {
           			if (i == j) {
               			printf("Cima, Direita\n");
           			}
       			}
   			}
}
	 //função recursividade para determinar o movimento da Rainha
	void moverRainha (int casas){
		if (casas > 0){
			printf("Esquerda\n");
			moverRainha (casas - 1);
		}
	}
	// função loops complexos para determinar o movimento do Cavalo
	//Loop exterto controla movimento vertical e o interno simula o movimento em L
	void movimentoCavalo() {
   	   	for (int i = 1; i <= 2; i++) {
       		for (int j = 1; j <= 2; j++) {
           		if ((i == 1 && j == 2) || (i == 2 && j == 1)) continue;
           			printf("Cima ");
       		}
   		}
   					printf(", Direita\n");
}

	int main(){
	
		printf("		Bem Vindo ao Xadrez Virtual Estacio!\n");
		printf("Mapa dos movimentos das peças: Torre, Bispo e Rainha e Cavalo\n");
		
		printf("\nEstes foram os movimentos da Torre: \n");
		moverTorre(5);
		printf("\n");
		
		printf("Estes foram os movimentos do Bispo: \n");
		moverBispo(5);
		printf("\n");
		
		printf("Estes foram os movimentos da Rainha: \n");
		moverRainha(8);
		printf("\n");
		
		printf("Estes foram os movimentos do Cavalo: \n");
		movimentoCavalo();
}
