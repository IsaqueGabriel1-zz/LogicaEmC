// Aula 7 - Introdução aos Ponteiros - Exemplo 2
// Neste exemplo alocamos memória para o ponteiro

#include<stdio.h>
#include<stdlib.h>

int main()  { 
  int *P;

  P = (int *)malloc(sizeof(int));  
  *P = 81;

  printf("\nConteudo apontado por P = %d antes da alteracao\n", P[0]);
  *P = 843;
  printf("Conteudo apontado por P = %d depois da alteracao\n", P[0]);

  free(P);
  printf("\n\nFim do Programa");
  return(0);
}








