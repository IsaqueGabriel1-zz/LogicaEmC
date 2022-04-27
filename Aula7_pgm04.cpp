// Aula 7 - Introdução aos Ponteiros - Exemplo 1
// Neste exemplo usamos um ponteiro para apontar para variáveis já existentes

#include<stdio.h>

int main()  { 
  int A;
  int B;
  int C;
  int *P;
  
  A = 19;
  B = 271;
  C = -162;
  
  printf("Conteudo de A = %d\n", A);
  printf("Endereco de A = %d\n", &A);

  printf("\nConteudo de B = %d\n", B);
  printf("Endereco de B = %d\n", &B);
    
  printf("\nConteudo de C = %d\n", C);
  printf("Endereco de C = %d\n", &C);

  printf("\nConteudo de P = %d\n", P);
  printf("Endereco de P = %d\n", &P);
  
  P = &A;
  printf("\nP esta apontando para A");
  printf("\nConteudo apontado por P = %d antes da alteracao\n", *P);
  *P = 843;
  printf("Conteudo apontado por P = %d depois da alteracao\n", *P);
  printf("A = %d\n", A);

  P = &B;
  printf("\nP esta apontando para B");
  printf("\nConteudo apontado por P = %d\n", *P);

  P = &C;
  printf("\nP esta apontando para B");
  printf("\nConteudo apontado por P = %d\n", *P);
  

  printf("\n\nFim do Programa");
  return(0);
}








