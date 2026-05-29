#include <stdio.h>

 struct Pessoa{
    char Nome [100];
    int Idade;
    float Altura;
};

int main() {
   
   struct Pessoa p;
   
   printf ("Digite o Nome da pessoa,a Idade e a Altura:\n");
   fgets(p.Nome, sizeof(p.Nome), stdin);
   scanf("%d", &p.Idade);
   scanf("%f", &p.Altura);
   
   
   printf("\n===================================\n");
   printf("         FICHA DA PESSOA                                  \n");
   printf("===================================\n");
  
   printf("Nome: %s", p.Nome);
   printf("Idade: %d\n", p.Idade);
   printf("Altura: %.2f\n", p.Altura);
   

    return 0;
}
