#include<stdio.h>

int main(void){
	int horas_trab, hora_extra;
	float valor_hora, sal_bruto, dobro_sal, sal_liq;
	
	printf("Quanto vale 1h trabalhada? ");
	scanf("%f", &valor_hora);
	
	printf("Quantas horas foram trabalhadas? ");
	scanf("%d", &horas_trab);
	
	printf("Quantas horas extras foram feitas? ");
	scanf("%d", &hora_extra);
	
	dobro_sal = valor_hora * hora_extra * 2.0f;
	sal_liq = valor_hora * horas_trab;
	sal_bruto = sal_liq + dobro_sal;
	
	printf("Salario liquido: %.2f\n", sal_liq);
	printf("Salario bruto: %.2f", sal_bruto);
	
	return(0);
	
}
