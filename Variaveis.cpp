#include<stdio.h> 
#include<stdlib.h>

int sub(int n1, int n2){
	int sub =  n1 - n2;
	printf("res %d", sub);
	return 0;
}

int main(void){
	//variavel do tipo int
	int n1 = 10;
	int n2 = 10;
	int soma = n1 + n2;
	printf("Valor de n1 = %d", n1);
	printf("\nValor de n2 = %d", n2);
	printf("\nA soma de %d + %d eh = %d\n", n1, n2, soma);
	sub(n1, n2);
	
	return 0;
}



