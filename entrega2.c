#include<stdio.h>

int main(void){
	int A,B,soma;
	float media = 0;
	
	
	printf("Digite um numero para A: ");
	scanf("%d", &A);
	
	printf("Digite um numero para B: ");
	scanf("%d", &B);
	
	soma = A + B ;
	media = soma / 2.0f;
	
	printf("A soma eh: %d", soma);
	printf("\nA media eh: %.2f", media);
	
	if(media <= 5){
		printf("\nO aluno foi reprovado!");
	}else{
		printf("\nO aluno foi aprovado!");
	}
	
	return(0);
	
}
