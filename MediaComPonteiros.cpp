#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n;
	int i, quant_notas, soma, media, T;
	
	printf("Digite a qnt de notas: ");
	scanf("%d", &quant_notas);
	
	T = quant_notas;
	n = (int *)(malloc(quant_notas * sizeof(int)));
	
	
	
	if(n == NULL){
		printf("\nErro de alocacao de memoria");
		system("pause");
		exit(1);	
	}
	
	for(i=0; i<quant_notas; i++){
		printf("\nDigite a nota %d: ", i);
		scanf("%d", &n[i]);
		soma += n[i];
	}
	media = soma / T;
	printf("\nA media do aluno foi de: %d pontos", media);
	
	free(n);
}
