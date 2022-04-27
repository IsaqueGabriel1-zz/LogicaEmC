#include<stdio.h>
#include<stdlib.h>


int main(){
	int tamanho;
	int i,j;
	scanf("%d", &tamanho);
	
	for(i=1; i<=tamanho; i++){
		
		for(j=tamanho - i; j>=1; j--){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("*");
		}
		
		for(j=2; j<=i; j++){
			printf("*");
	 	 }
		printf("\n");
	}
	
	for(i=1; i<=1; i++){
		
		for(j=tamanho - i; j>=1; j--){
			printf(" ");
		}

		printf("|\n");
		for(j=tamanho - i; j>1; j--){
			printf(" ");
		}
		for(j=0; j<=2; j++){
			printf("_");
		}
		
		printf("\n");
		
	}
	printf("\n");
	return 0;
}
