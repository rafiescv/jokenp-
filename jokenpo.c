#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

//JOKENPÔ

int escolhaJogador; 
int escolhaComputador;
srand(time(0)); //Gerador de números aleatórios

//Título inicial
printf("======================\n");
printf("== DESAFIO: JOKENPÔ ==\n");
printf("======================\n\n");
printf("Escolha uma opção:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("\nEscolha: ");
scanf("%d", &escolhaJogador);

//Escolha do computador 
escolhaComputador = rand() % 3 + 1; 

//Escolha do Jogador
switch (escolhaJogador)
{
case 1:
  printf("================\n");
  printf("\n- Jogador: Pedra\n");
  break;
case 2:
  printf("================\n");
  printf("\n- Jogador: Papel\n");
  break;
case 3:
  printf("===================\n");
  printf("\n- Jogador: Tesoura\n");
  break;

default:
  printf("=================\n");
  printf("\n- Opção inválida\n");
  return 0;
  break;
}

//Escolha do Computador
switch (escolhaComputador)
{
case 1:
  printf("- Computador: Pedra\n\n");
  break;
case 2:
  printf("- Computador: Papel\n\n");
  break;
case 3:
  printf("- Computador: Tesoura\n\n");
  break;
}

//Lógica do jogo
if (escolhaComputador == escolhaJogador)
{
  printf("===========\n");
  printf("= EMPATE! =\n");
  printf("===========\n");
} else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
           (escolhaJogador == 2) && (escolhaComputador == 1) ||
           (escolhaJogador == 3) && (escolhaComputador == 2))
{
  printf("=========================\n");
  printf("= Parabéns, você ganhou!=\n");
  printf("=========================\n");
} else {
  printf("================\n");
  printf("= Você perdeu! =\n");
  printf("================\n");
}

return 0;
}