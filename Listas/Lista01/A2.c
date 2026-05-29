#include <stdio.h>

 struct Placar{
    char Nome1 [100]; 
    int Gols1;
    char Nome2 [100];
    int Gols2;
 };


int main() {
struct Placar Jogo;

printf("Digite o nome do primeiro time e a sua quantidade de gols:\n");
scanf("%s", Jogo.Nome1);
scanf("%d", &Jogo.Gols1);
printf("Digite o nome do segundo time e seus gol:\n");
scanf("%s", Jogo.Nome2);
scanf("%d", &Jogo.Gols2);

printf("\n==============================\n");
printf("           PLACAR               \n");
printf("==============================\n");

printf("Nome: %s\n", Jogo.Nome1);
printf("Gols: %d\n", Jogo.Gols1);
printf("Nome: %s\n", Jogo.Nome2);
printf("Gols: %d\n", Jogo.Gols2);

if (Jogo.Gols1 > Jogo.Gols2){
printf("VENCEDOR: %s", Jogo.Nome1);
}else if (Jogo.Gols1 == Jogo.Gols2){
printf("EMPATOU!!!");    
}else{
    printf("VENCEDOR: %s", Jogo.Nome2);
}
    return 0;
}
