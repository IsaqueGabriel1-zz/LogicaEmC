#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	//valor � a variavel que
	//ser� apontada pelo ponteiro
	
	int valor = 27;
	
	//declara�ao de variavel ponteiro
	int *ptr;
	
	//atribuindo o endereco da variavel valo ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiros\n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x\n", &valor);
	printf("Conteudo da variavel ponteiro ptr: %x", ptr);
	
	getch();
	return(0);
}
