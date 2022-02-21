#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 == n2)
	{
		printf("\nOs numeros sao iguais!");
	}
	else
	{
		if(n1 > n2)
		{
			printf("\nO primeiro numero eh maior que o segundo!");
		}
		else
		{
			printf("\nO segundo numero eh maior que o primeiro");
		}
	}
}
