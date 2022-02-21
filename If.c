#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a, b, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	printf("Digite um outro numero inteiro: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("O valor da soma eh igual a : %d \n", soma);
	
	if(soma > 10){
		printf("O valor da soma eh maior que 10 \n");
	}else {
		printf("O valor da soma eh menor que 10 \n");
	}
	
	
	return(0);
}

