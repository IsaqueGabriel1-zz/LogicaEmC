#include<stdio.h>
#include<stdlib.h>


int main(){
	int tamanho;
	int i,j;
	scanf("%d", &tamanho);
	
	for(i=1; i<=2; i++){
		
		for(j=tamanho - i; j>=1; j--){
			printf(" ");
		}
		
		for(j=1; j<i; j++){
			printf("|");
			
		}

		printf("\n");
	}
	
	printf("\n");
	return 0;
}
