// Aula 8 - Vetores dinâmicos - Exercício 3 da Lista Geral de Exercícios com Vetor
//
//          O arquivo a ser lido tem o nome "entrada.txt"

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ExibeVetor(int *pV, int pTam) {
  int i;
  for (i = 0; i < pTam; i++) {
    if (i % 10 == 0) {
      printf("\n");
      printf("linha %5d:", i);
    }
    printf("%5d", pV[i]);
  }
}

int main()  {
  int *V;
  int TamV;
  int X;
  FILE *Arq;
  
  V = NULL;
  TamV = 0;
  Arq = fopen("entrada.txt", "r");
  while (fscanf(Arq, "%d\n", &X) != EOF) {
    TamV++;
    V = (int *)realloc(V, sizeof(int) * TamV);
    V[TamV-1] = X;
  }
  fclose(Arq);
  
  printf("Vetor lido contem %d elementos\n", TamV);
  ExibeVetor(V, TamV);  
  
  free(V);
  printf("\n\nFim do Programa");
  return(0);
}








