#include <stdio.h>
#include <stdlib.h>

int main(){
	double N1, N2, N3, N4, NEx, media, RecMedia;
	
	scanf("%lf %lf %.lf %.lf", &N1, &N2, &N3, &N4);
	media = (N1*2 + N2*3 + N3*4 + N4*1) / 4;
	printf("Media: %.1lf\n", media);
	
	if(media >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		if(media < 5.0)
		{
			printf("\nAluno reprovado.\n");
		}
		else
		{
			if(media >= 5 && media < 6.9){
				printf("\nAluno em exame.\n");
				
				scanf("%.1lf", NEx);
				media = (N1*2 + N2*3 + N3*4 + N4*1) / 10;
				RecMedia = media + NEx /2;
				printf("Nota do exame: %.1lf", NEx);
				
				if(RecMedia >= 5 || RecMedia <= 4.9){
					printf("\nAluno reprovado.");
					printf("\nMedia final: %.1lf", RecMedia);
				}else{
					printf("Aluno reprovado.");
				}
				
			}	
		}
	}
	
	
	
	return 0;
}
