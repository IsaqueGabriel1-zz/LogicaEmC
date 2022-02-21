#include<stdio.h>

int main(void){
	int valor1, valor2;
	int resp_soma, resp_sub, resp_mult, resp_divi;
	
	printf("-----------Testando operadores aritmeticos-----------");
	
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &valor2);
	
	resp_soma = valor1 + valor2;
	resp_sub = valor1 - valor2;
	resp_mult = valor1 * valor2;
	resp_divi = valor1 / valor2;
	
	printf("\nA soma de %d + %d eh = %d", valor1, valor2, resp_soma);
	printf("\nA subtracao de %d - %d eh = %d", valor1, valor2, resp_sub);
	printf("\nA multiplicacao de %d * %d eh = %d", valor1, valor2, resp_mult);
	printf("\nA divisao de %d / %d eh = %d", valor1, valor2, resp_divi);
}
