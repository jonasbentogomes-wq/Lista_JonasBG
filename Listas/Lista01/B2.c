#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
}produto;

int main(){
    int armazenado;
    int n;
    float valoritem = 0;
    float totalgeral = 0;
    float maiorvalor = -1.0;
    int indicemaior = 0;

    printf ("Digite a quantidade de produtos:\n");
    scanf ("%d", &n);

    produto estoque[n];

    for (int i = 0; i < n; i++){
       scanf("%s %f %d", estoque[i].nome, &estoque[i].preco, &estoque[i].quantidade); 
    }

    for (int i = 0; i < n; i++){
   valoritem = estoque[i].preco * estoque[i].quantidade;
   printf("Nome: %s\n %.2f\n", estoque[i].nome, valoritem);
    totalgeral = valoritem + totalgeral;
    if ( valoritem > maiorvalor){
   maiorvalor = valoritem;
   indicemaior = i;
    }
    }
  printf("valor total geral: %.2f\n", totalgeral);
  printf("Produto campeão: %s", estoque[indicemaior].nome );



return 0;

}
