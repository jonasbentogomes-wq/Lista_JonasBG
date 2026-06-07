#include <stdio.h>

typedef struct {
    char nome[50];
    int pontos;
} jogador;

int main() {
    float maiorponto = -1.0;
    int indicemaior = 0;
    int menorponto = 999999;
    int indicemenor = 0;
    int n;

    scanf("%d", &n);
    jogador ranking[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", ranking[i].nome, &ranking[i].pontos);
    }

    for (int i = 0; i < n; i++) {
        if (ranking[i].pontos > maiorponto) {
            maiorponto = ranking[i].pontos;
            indicemaior = i;
        }
        if (ranking[i].pontos < menorponto) {
            menorponto = ranking[i].pontos;
            indicemenor = i;
        }
    }

    printf("Mais pontos: %s (%d)\n", ranking[indicemaior].nome, ranking[indicemaior].pontos);
    printf("Menos pontos: %s (%d)\n", ranking[indicemenor].nome, ranking[indicemenor].pontos);

    return 0;
}
