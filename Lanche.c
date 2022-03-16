#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int codigo, qnt;
	double preco;
	
	scanf("%d %d", &codigo, &qnt);
	
	if(codigo == 1)
	{
		preco = qnt * 4.00;
		printf("Total: R$ %.2lf\n", preco);
	}
	else
	{
		if(codigo == 2)
		{
			preco = qnt * 4.50;
			printf("Total: R$ %.2lf\n", preco);
		}
		else
		{
			if(codigo == 3)
			{
				preco = qnt * 5.00;
				printf("Total: R$ %.2lf\n", preco);
			}
			else
			{
				if(codigo == 4)
				{
					preco = qnt * 2.00;
					printf("Total: R$ %.2lf\n", preco);
				}
				else
				{
					if(codigo == 5)
					{
						preco = qnt * 1.50;
						printf("Total: R$ %.2lf\n", preco);
					}
				}
			}
		}
	}
	return 0;
}
