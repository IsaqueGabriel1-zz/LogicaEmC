#include<stdio.h>

int main(void){
	int A, B, res;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	
	res = ((3 * A) + (2 * B)) / A + B;
	
	printf("O resultado eh: %d", res);
	return(0);
	
}
