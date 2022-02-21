#include<stdio.h> 
#include<stdlib.h>


int main(void){
	char letra; //variavel do tipo char, contém caracteres
	int x;//variavel para numeros inteiros
	float salario; //variavel do tipo float (real) contem casas decimais
	
	letra = 'a';
	x = 10;
	salario = 321.50;
	
	//para exivir uma variavel do tipo char, use o marcador "c"
	printf("letra = c%\n", letra);
	printf("x = %d \n", x);
	printf("salario = %3.2f \n", salario);
	return 0;
}
