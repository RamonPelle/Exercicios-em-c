#include <stdio.h>
#include <stdlib.h>
#define TAM 2
int main() {
  typedef struct {
    int matricula;
    float nota;
  } Cadastro;
  int i;
  Cadastro aluno1, vetAlunos[TAM];
  printf("Dados do aluno\n");
  printf("Digite o matricula:");
  scanf("%d", &aluno1.matricula);
  printf("Digite o nota:");
  scanf("%f", &aluno1.nota);
  printf("Matricula: %d\nNota: %.2f", aluno1.matricula, aluno1.nota);
  printf("\n\nIniciando uso de vetor\n\n");
  for (i=0; i<TAM; i++){
    printf("Digite o matricula:");
    scanf("%d", &vetAlunos[i].matricula);
    printf("Digite o nota:");
    scanf("%f", &vetAlunos[i].nota);
  }
  printf("\nImprimindo vetor\n");
  for (i=0; i<TAM; i++){
    printf("Matricula: %d\nNota: %.2f\n", vetAlunos[i].matricula, vetAlunos[i].nota);
  }
  return 0;
}
