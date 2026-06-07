#include <stdio.h>

typedef struct {
  char nome[100];
  float nota;
}aluno;

int main() {

int n;
float soma = 0;
float media;
int aprovados = 0;

printf("Digite o numero de alunos:\n");
scanf("%d", &n);
aluno turma[n];

  for (int i = 0; i < n; i++){
    scanf("%s %f", turma[i].nome, &turma[i].nota);
  }

  printf("TABELA:\n");

  for (int i = 0; i < n; i++){
  soma = soma + turma[i].nota;
  if (turma[i].nota >= 7.0)
  aprovados++;
   printf("\n %s:  %.2f ", turma[i].nome, turma[i].nota);
}

media = soma / n;
printf("\nMédia da turma: %.2f\n", media);
printf("Aprovados: %d\n", aprovados);

return 0;
}
