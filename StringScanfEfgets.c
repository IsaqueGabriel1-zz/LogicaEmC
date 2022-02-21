#include<stdio.h>

int main(void){
	char nome[11];//string é uma variavel que armazena uma cadeia de caracteres
	
	
	printf("Digite seu nome: ");
	//scanf("%s", nome);//%s oara sequencia de caracteres	
	fgets(nome,11,stdin);//leitura da string
	printf("O nome armazenado foi: %s", nome);
	//a diferença é que o scanf para de ler o teclado ao localizar um espaço em branco
	
	return(0);
}
