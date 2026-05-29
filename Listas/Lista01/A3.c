#include <stdio.h>

struct Produto{
    char Nome[100];
    float Preco;
    int Quantidade ;
};

int main() {
   
struct Produto A;
float valordesconto;
float valortotal;
float economizado;

printf("Digite o Nome do Produto e a Quantidade e o Preco:\n");
scanf("%s %d %f", A.Nome, &A.Quantidade,&A.Preco);

valortotal = A.Quantidade * A.Preco;
valordesconto = valortotal * 0.9;
economizado = valortotal - valordesconto;

printf("Valor Total: %.2f\n", valortotal);
printf("Valor com Desconto: %.2f\n", valordesconto);
printf("Economizado: %.2f", economizado);
    return 0;
}
