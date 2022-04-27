#include<stdio.h>
#include<stdlib.h>

int main(){
	int *N;
	int i, qntNum, num, stop;
	
	N = (int *)(malloc(sizeof(int)));
	if(N == NULL){
		printf("Erro de alocacao");
	}
	
	do{
		printf("digite um numero: ");
		scanf("%d", N+i);
		
		i++;
		N = (int *)realloc(N, (i+1) * sizeof(int));
		
		printf("Continuar? 0-nao, 1-sim\n");
		scanf("%d", &stop);
		qntNum++;
	}while(stop != 0);
	
	printf("Foram digitados %d numeros\n", qntNum);
	
	for(i=0; i<qntNum; i++){
		printf("Numeros digitados: %d \n", N[i]);
		if(N[i] == 10){
			printf("Ha um 10 aqui!");
		}
	}
}
