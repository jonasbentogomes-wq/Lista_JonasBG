#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero\n");
        return 0;
    }
    return a / b;
}

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    printf("Soma: %.2f\n", somar(x, y));
    printf("Subtracao: %.2f\n", subtrair(x, y));
    printf("Multiplicacao: %.2f\n", multiplicar(x, y));
    
    if (y != 0) {
        printf("Divisao: %.2f\n", dividir(x, y));
    } else {
        dividir(x, y);
    }

    return 0;
}
