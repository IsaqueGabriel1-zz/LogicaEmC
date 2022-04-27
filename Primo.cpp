#include<stdio.h>
#include<stdlib.h>


int main(){
	int num, i, j, cont1, cont2;
	
	do{
		cont1=0;
		cont2=0;
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		for(j=1; j<10; j++){
			if(num / j == num){
				if(num / num == 1){
					cont1++;
					cont2++;
				}
			}
		}
		
		if(cont1 + cont2 == 2){
			printf("O numero eh primo");
			cont1 = 0;
			cont2 = 0;
		}else{
			printf("O numero nao eh primo");
			cont1 = 0;
			cont2 = 0;
		}
		
		printf("\nDigite o valor de i: ");
		scanf("%d", &i);
	}while(i != 0);
	
	
	return 0;
}
