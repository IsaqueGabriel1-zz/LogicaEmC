#include<stdio.h>
#include<stdlib.h>

int main(){
	int x;
	
	do
	{
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if(x < 0)
		{
			printf("Negativo\n");
		}
		else
		{
			printf("Positivo\n");
		}
		
	}while(x != 0);
	
	return 0
}
