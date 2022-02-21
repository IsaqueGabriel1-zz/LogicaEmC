#include<stdio.h>

int main(void){
	double R, area, volume;
	
	printf("Digite o valor de R: ");
	scanf("%lf", &R);
	
	area = 3.14f * (R*2);
	
	printf("Area eh: %.3lf", area);
	return(0);
}
