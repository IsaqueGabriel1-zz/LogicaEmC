// Aula 8 - Vetores dinâmicos - Exemplo 3
//      
//          Foi incluído o recurso de gravar os valores do vetor em um
//          arquivo em disco com o nome saida03.txt e isso foi feito
//          usando-se uma função - dentro da função o arquivo é gravado

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
    printf("%8d", pV[i]);
  }
}

void GravaArquivo(int *pV, int pTam, char *NomeArq) {
  FILE *Arq;
  int i;
  Arq = fopen(NomeArq, "w");
  for (i = 0; i < pTam; i++)
    fprintf(Arq, "%d\n", pV[i]);
  fclose(Arq);
}

int main()  {
  int *V;
  int TamV;
  int Min, Max, A, Candidato;
  
  srand(time(NULL));
  do {
    printf("Digite Min: ");
    scanf("%d", &Min);
  } while (Min < 1);
  do {
    printf("Digite Max: ");
    scanf("%d", &Max);
  } while (Max < Min);
  
  printf("Digite A: ");
  scanf("%d", &A);

  V = NULL;
  TamV = 0;
  Candidato = Min;
  while (Candidato <= Max) {
    if (Candidato % A == 0) {
      TamV++;
      V = (int *)realloc(V, sizeof(int) * TamV);
      V[TamV-1] = Candidato;
    }
    Candidato++;
  }
  
  printf("Vetor preenchido com %d elementos\n", TamV);
  ExibeVetor(V, TamV);
  GravaArquivo(V, TamV, "saida03.txt");
  
  free(V);
  printf("\n\nFim do Programa");
  return(0);
}








