#include<stdio.h>

int main(void){
	int n1, n2, resto, r;
	
	printf("\nDigite um numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite um outro numero: ");
	scanf("%d", &n2);
	
	r = n1 / n2;
	
	printf("\nResultado da divisao inteira: %d", r);
	
	resto = n1 % 2;
	
	printf("\nResto da divisao = %d", resto);
	
	return(0);
}
