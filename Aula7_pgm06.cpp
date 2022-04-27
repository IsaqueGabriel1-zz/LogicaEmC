// Aula 7 - Introdução aos Ponteiros - Exemplo 3
// Neste exemplo alocamos memória para o ponteiro usado como vetor

#include<stdio.h>
#include<stdlib.h>

int main()  { 
  int *P;
  int Tamanho, i;
  
  printf("Digite o tamanho: ");
  scanf("%d", &Tamanho);

  P = (int *)malloc(sizeof(int) * Tamanho);  

  for (i = 0; i < Tamanho; i++)
    P[i] = rand() % 100;

  for (i = 0; i < Tamanho; i++)
    printf("P[%d] = %d\n", i, P[i]);

  printf("\n\nFim do Programa");
  return(0);
}








