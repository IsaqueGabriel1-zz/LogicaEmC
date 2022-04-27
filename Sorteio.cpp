#include<stdio.h>
#include<stdlib.h>

int main(){
	int *tentativas;
	int sorte, i, numTentativas=0;
	
	sorte = 10;
	tentativas = (int *)malloc(sizeof(int));
	if(tentativas == NULL){
		printf("Erro de alocacao");
		system("pause");
	}
	do{
		printf("Digite o numero da sorte: ");
		scanf("%d", tentativas+i);
		
		i++;
		tentativas = (int *)realloc(tentativas, (i+1) * sizeof(int));
		if(tentativas == NULL){
			printf("Erro de realloc");
		}
		numTentativas++;
	}while(tentativas[i] != sorte);
	
	printf("Voce tentou %d vezes\n", numTentativas);
	
	for(i=0; i<numTentativas; i++){
		printf("Numeros tentados: %d ", tentativas[i]);
	}
	
	free(tentativas);
	return 0;
}
