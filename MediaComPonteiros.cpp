#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n;
	int i = 0, quant_notas = 0, soma = 0, media = 0;
	
	printf("Digite a qnt de notas: ");
	scanf("%d", &quant_notas);
	
	n = (int *)(malloc(quant_notas * sizeof(int)));
	
	
	
	if(n == NULL){
		printf("\nErro de alocacao de memoria");
		system("pause");
		exit(1);	
	}
	printf("%d", quant_notas);
	for(i=0; i<quant_notas; i++){
		printf("\nDigite a nota %d: ", i);
		scanf("%d", &n[i]);
		soma += n[i];
	}
	printf("%d", soma);
	media = soma / quant_notas;
	printf("\nA media do aluno foi de: %d pontos", media);
	
	free(n);
}
