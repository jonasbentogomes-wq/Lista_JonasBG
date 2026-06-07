#include <stdio.h>

typedef struct {
    char nome[100];
    float n1, n2, n3;
    float media;
} Aluno;

Aluno calcularMedia(Aluno a) {
    a.media = (a.n1 + a.n2 + a.n3) / 3.0;
    return a;
}

char definirConceito(float media) {
    if (media >= 9.0) return 'A';
    if (media >= 7.0) return 'B';
    if (media >= 5.0) return 'C';
    return 'D';
}

void imprimirAluno(Aluno a) {
    printf("%s %.2f %c\n", a.nome, a.media, definirConceito(a.media));
}

int main() {
    int n;
    scanf("%d", &n);
    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %f %f %f", turma[i].nome, &turma[i].n1, &turma[i].n2, &turma[i].n3);
        turma[i] = calcularMedia(turma[i]);
    }

    for (int i = 0; i < n; i++) {
        imprimirAluno(turma[i]);
    }

    return 0;
}

