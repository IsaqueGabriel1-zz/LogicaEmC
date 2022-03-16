#include<stdio.h>
#include<stdlib.h>

int main(){
	int valor, menorVal, maiorVal, qntValor=0, soma=0;
	double media;
	do
	{
		printf("Digite um valor: ");
		scanf("%d", &valor);
		
		if(valor > 0)
		{
			if(qntValor == 0){
				maiorVal = valor;
				menorVal = valor;
			}
			else
			{
				if(valor > maiorVal){
					maiorVal = valor;
				}
				else
				{
					if(valor < menorVal){
						menorVal = valor;
					}	
				}
				
			}
			soma += valor;
			qntValor += 1;
		}
	}while(valor > 0);
	
	
	media = (double)soma / (double)qntValor;
	
	printf("Maior valor: %d", maiorVal);
	printf("\nMenor valor: %d", menorVal);
	printf("\nSoma dos valores: %d", soma);
	printf("\nMedia: %.2lf", media);
	
	return 0;
}
