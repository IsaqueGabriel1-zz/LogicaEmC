#include<stdio.h>

int main(void){
	char conceito;//variavel do tipo char, armazena um unico caracter na memoria
	float nota;
	int numero;
	
	
	printf("Informe o conceito do aluno: ");
	scanf("%c" ,&conceito);
	
	printf("Informe a nota do aluno: ");
	scanf("%f", &nota);
	
	printf("Informe o numero de matricula do aluno: ");
	scanf("%d", &numero);
	
	printf("Conceito: %c \n", conceito);
	printf("Nota: %.1f \n", nota);
	printf("Matricula: %d \n", numero);
	return 0;
}
