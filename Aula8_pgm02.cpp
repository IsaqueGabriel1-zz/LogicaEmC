// Aula 8 - Vetores dinâmicos - Exemplo 2

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
  int N, i;
  int X;
  bool Achou;
  
  srand(time(NULL));
  printf("Digite N: ");
  scanf("%d", &N);
  
  V = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    V[i] = rand() % 101;
  }
  
  printf("Vetor gerado\n");
  ExibeVetor(V, N);
  
  printf("\n\nDigite X a ser procurado no vetor: ");
  scanf("%d", &X);
  Achou = false;
  for (i = 0; i < N; i++) {
    if (V[i] == X) {
      printf("  %d foi econtrado na posicao %d\n", X, i);
      Achou = true;
    } 
  }
  if (!Achou)
    printf("  %d nao esta no vetor\n", X);
  
  free(V);
  printf("\n\nFim do Programa");
  return(0);
}








