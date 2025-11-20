#include <stdio.h>
#include <stdlib.h>   // <- rand() e srand()
#include <time.h>  

int main() {
    int numerodoJogador, numerodoComputador, resultado;
    char tipoComparacao;
// gerar número aleatório 
srand(time(0));
numerodoComputador = rand() % 100 + 1;

printf("####### ÍNICIO DO JOGO #######\n");
printf("Bem-vindo ao jogo do Maior, Menor ou Igual\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha a comparação: \n");
scanf(" %c", &tipoComparacao);

printf("Digite o seu número de 1 a 100: ");
scanf("%d", &numerodoJogador);

printf("O número do do computador é: %d\n", numerodoComputador);


switch (tipoComparacao)
{
case 'M':
case 'm':
    printf("Você escolheu a opção maior\n");
    resultado = numerodoJogador > numerodoComputador ? 1 : 0;
break;

case 'N':
case 'n':
    printf("Você escolheu a opção menor\n");
    resultado = numerodoJogador < numerodoComputador ? 1 : 0;
break;

case 'I':
case 'i':
    printf("Você escolheu a opção igual\n");
    resultado = numerodoJogador == numerodoComputador ? 1 : 0;
break;

default:
    printf("Opção de jogo inválida\n");
}

printf("O número do Computador é: %d e o do Jogador é: %d\n", numerodoComputador, numerodoJogador);

if (resultado == 1) {
printf("Parabéns, você ganhou!\n");
} else {
printf("Infelizmente, você perdeu!\n");
}
printf("\n");
return 0;
}