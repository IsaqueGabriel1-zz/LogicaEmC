#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
	int N, i;
	int Digitos[5];
	int pesos[5] = {6, 5, 4, 3, 2};
	
	
	do{
		printf("Digite um numero");
		scanf("%d", &N);
	}while(N < 10000 || N > 99999);
	
	
	Digitos[0] = N / 10000;
	N = N % 10000

	return(0);
}
