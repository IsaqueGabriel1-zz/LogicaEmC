#include <stdio.h>

int main(void){
	double n1=0,n2=0,media=0;
	double resp;
	
	do
	{
		printf("Digite a primeira nota: ");
		scanf("%lf", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%lf", &n2);
		
		media = (n1 + n2)/2;
		printf("Media do aluno = %.2lf \n", media);
		
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%lf", &resp);
	}while(resp == 1);
	
	return 0;
}
