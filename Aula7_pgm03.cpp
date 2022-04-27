// Aula 7 - Vetores estáticos - Exemplo 3

#include<stdio.h>

int main()  { 
  int V[15] = {17, 4, 53, 38, 22, 40, 25, 16, 31, 64, 45, 32, 20, 12, 29};  
  int i, A;
  bool Achou;
 
  printf("\nExibicao do vetor\n");
  for (i = 0; i < 15; i++)
    printf("%d ", V[i]);
    
  printf("\n\n");
  printf("Digite A: ");
  scanf("%d", &A);
  while (A > 0) {
    Achou = false;
    for (i = 0; i < 15; i++) {
      if (V[i] == A) {
        printf("  valor %d encontrado na posicao %d\n", A, i);
        Achou = true;
      }
    }
    if ( !Achou ) 
      printf("  valor %d nao existe no vetor\n", A);
      
    printf("Digite A: ");
    scanf("%d", &A);
  }
    
  printf("\n\nFim do Programa");
  return(0);
}








