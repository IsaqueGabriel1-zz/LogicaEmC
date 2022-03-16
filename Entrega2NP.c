#include<stdio.h>
#include<stdlib.h>

int main(){
	int valor, somaP=0, somaN=0;
	
	do
	{
		printf("Digite um numero, positivo ou negativo: ");
		scanf("%d", &valor);
		
		if(valor < 0){
			somaN += valor;
		}else{
			somaP += valor;
		}
		
	}while(valor != 0);
	
	
	printf("Total dos positivos = %d", somaP);
	printf("\nTotal dos negativos = %d", somaN);
	
	return 0;
}
