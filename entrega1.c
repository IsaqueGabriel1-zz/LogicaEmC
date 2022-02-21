#include<stdio.h>

int main(void){
	float area, base, altura;
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2.0f;
	
	printf("\nA area desse triangulo eh: %2.2f", area);
	
	return(0);
	
}
