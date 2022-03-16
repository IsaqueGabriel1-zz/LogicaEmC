#include <stdio.h>

int main(){
	int contador = 1;
	int contador2 = 1;
	
	while(contador <= 10)
	{
		while(contador2 <=10)
		{
			printf("%d X %d = %d\n", contador, contador2, contador * contador2);
			contador2++;
		}
		contador++;
	}
	
	return 0;
}
