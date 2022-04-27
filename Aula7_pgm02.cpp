// Aula 7 - Vetores estáticos - Exemplo 2

#include<stdio.h>

int main()  {
  int V[10];
  int TamV;
  int i, X;

  // Inicialização do vetor. Não é necessária para a lógica deste programa, mas eu fiz apenas para mostrar como é
//  for (i = 0; i < 10; i++)
//    V[i] = 0;
  
  TamV = 0;
  printf("Digite o elemento %d: ", TamV);
  scanf("%d", &X);
  while (X != 0  &&  TamV < 10) {
    V[TamV] = X;
    TamV++;  
    if (TamV < 10) {
      printf("Digite o elemento %d: ", TamV);
      scanf("%d", &X);
    }
  }
  if (TamV == 10) 
    printf("\nVetor completo - Preenchimento terminado");
  
  printf("\n\nExibicao do vetor de tamanho efetivo = %d\n", TamV);
  for (i = 0; i < TamV; i++)
    printf("%d\n", V[i]);
    
  printf("\n\nFim do Programa");
  return(0);
}








