#include<stdio.h>

int main(void){
	char nome[11];//string � uma variavel que armazena uma cadeia de caracteres
	
	
	printf("Digite seu nome: ");
	//scanf("%s", nome);//%s oara sequencia de caracteres	
	fgets(nome,11,stdin);//leitura da string
	printf("O nome armazenado foi: %s", nome);
	//a diferen�a � que o scanf para de ler o teclado ao localizar um espa�o em branco
	
	return(0);
}
