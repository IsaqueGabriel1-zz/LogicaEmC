// Aula 7 - Vetores estáticos - Exemplo 1

#include<stdio.h>

int main()  {
  int A[5] = {19, 23, 29, 31, 37};
  int i;
  
  printf("Exibicao do vetor em ordem direta\n");
  for (i = 0; i < 5; i++)
    printf("%d ", A[i]);
    
  printf("\nExibicao do vetor em ordem inversa\n");
  for (i = 4; i >= 0; i--)
    printf("%d ", A[i]);
  
  printf("\n\nFim do Programa");
  return(0);
}








