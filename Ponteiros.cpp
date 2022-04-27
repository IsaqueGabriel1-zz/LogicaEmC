#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p;//criando um ponteiro para o vetor
	int i, quant_elementos, totNum=0, stop;
	
	//recebe a quantidade de elementso
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d", &quant_elementos);
	
	//alocando a memória para o vetor de acordo com a quantidade
	//de elementos do vetor
	
	p = (int *)(malloc(quant_elementos * sizeof(int)));
	
	//caso não seja possivel alocar memória suficiente enviar mensagem
	//e sair do programa com exit(1);
	
	if(p == NULL){
		printf("\nErro de alocacao de memoria");
		system("pause");
		exit(1);	
	}
	printf("\n");
	
	for(i=0; i<=quant_elementos; i++){
		printf("Digite um numero: ");
		scanf("%d", &p[i]);
		totNum++;
	}
	
	printf("Foram digitados: %d numeros", totNum);
	free(p);
}
