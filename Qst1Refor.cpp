#include<stdio.h>
#include<stdlib.h>


int main(){
	int *ptr, i, n1, n2;
	
	printf("Informe o tamanho: ");
	scanf("%d", &n1);
	
	ptr = (int *)malloc(n1 * sizeof(int));
	
	printf("Endereco de memoria alocado: ");
	for(i=0; i<n1; i++){
		printf("%u\n", ptr+1);
		printf("\nInforme o novo tamanho: ");
		scanf("%d", &n2);
		
		ptr = (int *)realloc(ptr, n2 * sizeof(int));
		printf("Novo endereco alocado na memoria\n");
	}
	
	for(i=0; i<n2; i++){
		printf("%d\n", ptr + i);
	}
	
	free(ptr);
	
	
	return 0;
}
