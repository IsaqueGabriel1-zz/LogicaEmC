#include<stdio.h>
#include<stdlib.h>


int main(){
	int tamanho;
	
	printf("Digite o tamanho: ");
	scanf("%d", &tamanho);
	
	for(int i=1; i<=tamanho; i++){
		printf(" *");
	}
	printf("\n");
	
	
	for(int i=2; i<tamanho; i++){
		printf(" *");
			for(int j=2; j<tamanho; j++){
				printf("  ");
			}
			printf(" *\n");
	}
	
	printf("\n");
	return 0;
}
