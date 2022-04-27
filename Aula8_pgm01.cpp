// Aula 8 - Vetores dinâmicos - Exemplo 1
//      
//          Foi incluído o recurso de gravar os valores do vetor em um
//          arquivo em disco com o nome saida01.txt

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
  FILE *Arq;
  
  srand(time(NULL));
  printf("Digite N: ");
  scanf("%d", &N);
  
  V = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    V[i] = rand() % 101;
  }
  
  printf("Vetor gerado\n");
  ExibeVetor(V, N);
  
  Arq = fopen("saida01.txt", "w");
  for (i = 0; i < N; i++)
    fprintf(Arq, "%d\n", V[i]);
  fclose(Arq);
  
  free(V);
  printf("\n\nFim do Programa");
  return(0);
}








