#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N, P, R, soma, cont;
	
	printf("Digite o numero de termos: ");
	scanf("%d", &N);
	
	printf("Digite o primeiro termo: ");
	scanf("%d", &P);
	
	printf("Digite a razao: ");
	scanf("%d", &R);
	
	printf("%d", N);
	printf("\n%d", P);
	printf("\n%d", R);
	
	for(cont=0; cont < N; cont++){
		printf("%d\n", P);
		soma += P;
		P *= R;
	}
	
	
	printf("\nSoma: %d", soma);
	return 0;
}
