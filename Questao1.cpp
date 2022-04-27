#include<stdio.h>
#include<stdlib.h>


int main(){
	int NV, QV, cod;
	int vendasTot=0,vendasVa=0, vendasAta=0;
	int i;
	bool codigoValido;
	

	do{
		printf("Digite o numero de vendas (NV)");
		scanf("%d", &NV);
		if(NV <= 0){
			printf("O numero de vendas deve ser maior que zero\n");
		}
	}while(NV <= 0);
	
	do{
		printf("Digite o codigo: ");
		scanf("%d", &cod);
		if(cod == 16 or cod == 23 or cod == 27 or cod == 34){
			codigoValido = true;
		}else{
			codigoValido = false;
			printf("Codigo invalido\n");
		}
	}while(codigoValido != true);
	
	printf("Digite a quantidade (QV): ");
	scanf("%d", &QV);
	
	if(cod == 16){
		if(QV < 50){
			vendasVa = 14.35 * QV;
		}else{
			vendasAta = 12.93 * QV;
		}
	}else if(cod == 23){
		if(QV < 100){
			vendasVa = 35.12 * QV;
		}else{
			vendasAta = 29.85 * QV;
		}
	}else if(cod == 27){
		if(QV < 70){
			vendasVa = 19.35 * QV;
		}else{
			vendasAta = 16.76 * QV;
		}
	}else if(cod == 34){
		if(QV < 40){
			vendasVa = 63.40 * QV;
		}else{
			vendasAta = 58,25 * QV;
		}
	}
	
	printf("Vendas totais para varejo: %d\n", vendasVa);
	printf("Vendas totais para atacado: %d\n", vendasAta);
}
