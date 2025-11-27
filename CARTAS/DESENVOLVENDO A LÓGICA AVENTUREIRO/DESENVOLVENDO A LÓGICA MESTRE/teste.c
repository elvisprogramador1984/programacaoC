#include <stdio.h>
#include <stdlib.h>

int main() {

    // ----------------- DADOS E VARIÁVEIS -----------------

    // Dados da Carta 1 e 2
    char estado1[3], codigo1[10], nome1[50], estado2[3], codigo2[10], nome2[50];
    int populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;
    float densidade1, pib_per_capita1, densidade2, pib_per_capita2;

    int escolha1, escolha2;

    // Variáveis para armazenar o nome dos atributos escolhidos
    char *nome_atr1, *nome_atr2 = "N/A";
    
    // Variáveis para armazenar os valores dos atributos (v1A, v2A, etc.)
    float v1A, v1B = 0.0, v2A, v2B = 0.0;
    
    // Variáveis para a soma final
    float soma1, soma2;

    // ----------------- ENTRADA DE DADOS (CADASTRO SIMULADO) -----------------
    
    // ----------------- CARTA 1 -----------------
    printf("=== Carta 1  ===\n");
    printf("Digite o Estado (A-H): "); scanf(" %2s", estado1);
    printf("Digite o Código (ex. A01, B02): "); scanf(" %9s", codigo1);
    printf("Digite a Cidade: "); scanf(" %49[^\n]", nome1);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao1);
    printf("Digite a área em km² (use ponto, ex: 7522.33): "); scanf("%f", &area1);
    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): "); scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos turísticos: "); scanf("%d", &pontos1);

    densidade1 = (area1 != 0) ? (float)populacao1 / area1 : 0.0;
    pib_per_capita1 = (populacao1 != 0) ? pib1 / (float)populacao1 : 0.0;

    // ----------------- CARTA 2 -----------------
    printf("\n=== Carta 2  ===\n");
    printf("Digite o Estado (A-H): "); scanf(" %2s", estado2);
    printf("Digite o Código (ex. A01, B02): "); scanf(" %9s", codigo2);
    printf("Digite a Cidade: "); scanf(" %49[^\n]", nome2);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao2);
    printf("Digite a área em km² (use ponto, ex: 7522.33): "); scanf("%f", &area2);
    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): "); scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos turísticos: "); scanf("%d", &pontos2);
    
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0.0;
    pib_per_capita2 = (populacao2 != 0) ? pib2 / (float)populacao2 : 0.0;

    // ----------------- PRIMEIRO ATRIBUTO (ESCOLHA 1) -----------------
    printf("\n--- ESCOLHA DO PRIMEIRO ATRIBUTO ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade\n");
    printf("6 - PIB per capita\n");
    printf("Escolha (1-6): ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1: 
            v1A = populacao1; v2A = populacao2;
            nome_atr1 = "Populacao";
        break;
        case 2: 
            v1A = area1; v2A = area2; 
            nome_atr1 = "Area";
        break;
        case 3: 
            v1A = pib1; v2A = pib2; 
            nome_atr1 = "PIB";
        break;
        case 4: 
            v1A = pontos1; v2A = pontos2; 
            nome_atr1 = "Pontos Turisticos";
        break;
        case 5: 
            v1A = densidade1; v2A = densidade2; 
            nome_atr1 = "Densidade";
        break;
        case 6: 
            v1A = pib_per_capita1; v2A = pib_per_capita2; 
            nome_atr1 = "PIB per capita";
        break;
        default:
            printf("\nOpcao invalida para o primeiro atributo. Usando Populacao (default).\n");
            v1A = populacao1; v2A = populacao2;
            nome_atr1 = "Populacao (Default)";
            escolha1 = 1;
    }

    // ----------------- SEGUNDO ATRIBUTO  -----------------

    printf("\n--- ESCOLHA DO SEGUNDO ATRIBUTO ---\n");
    printf("O primeiro foi: %s Escolha outro?\n", nome_atr1);
    
    // Variável para checar se a escolha é válida (diferente da primeira)
    int escolha2_valida = 0;

    switch (escolha2) {
        case 1:
            if (escolha1 != 1) { 
                v1B = populacao1; v2B = populacao2; nome_atr2 = "Populacao"; escolha2_valida = 1; 
            } else { 
                printf("Erro: Populacao ja foi escolhida.\n");
            }
        break;
        case 2:
            if (escolha1 != 2) { 
                v1B = area1; v2B = area2; nome_atr2 = "Area"; escolha2_valida = 1; 
            } else { 
                printf("Erro: Area ja foi escolhida.\n");
            }
        break;
        case 3:
            if (escolha1 != 3) { 
                v1B = pib1; v2B = pib2; nome_atr2 = "PIB"; escolha2_valida = 1; 
            } else { 
                printf("Erro: PIB ja foi escolhido.\n");
            }
        break;
        case 4:
            if (escolha1 != 4) { 
                v1B = pontos1; v2B = pontos2; nome_atr2 = "Pontos Turisticos"; escolha2_valida = 1; 
            } else { 
                printf("Erro: Pontos Turisticos ja foi escolhido.\n");
            }
        break;
        case 5:
            if (escolha1 != 5) { 
                v1B = densidade1; v2B = densidade2; nome_atr2 = "Densidade"; escolha2_valida = 1; 
            } else { 
                printf("Erro: Densidade ja foi escolhida.\n");
            }
        break;
        case 6:
            if (escolha1 != 6) { 
                v1B = pib_per_capita1; v2B = pib_per_capita2; nome_atr2 = "PIB per capita"; escolha2_valida = 1; 
            } else { 
                printf("Erro: PIB per capita ja foi escolhido.\n");
            }
        break;
        default:
            printf("\nOpcao invalida. Usando o primeiro atributo disponivel como default.\n");
    }

    if (escolha2_valida == 0) {
        if (escolha1 != 1) {
            v1B = populacao1; v2B = populacao2; nome_atr2 = "Populacao";
        } else if (escolha1 != 2) {
            v1B = area1; v2B = area2; nome_atr2 = "Area";
        } else {
             // Se 1 e 2 foram escolhidos, forçamos o 3.
            v1B = pib1; v2B = pib2; nome_atr2 = "PIB";
        }
    }

    soma1 = v1A + v1B;
    soma2 = v2A + v2B;

    printf("\n======================================================\n");
    printf("### RESULTADO DA RODADA: %s vs %s ###\n", nome1, nome2);
    printf("======================================================\n");
    
    // EXIBIÇÃO DE VALORES E ATRS
    printf("\n--> ATRIBUTO 1: %s\n", nome_atr1);
    printf("- %s: %.2f\n", nome1, v1A, nome2, v2A);
    //printf("- %s: %.2f\n", nome2, v2A);

    printf("\n--> ATRIBUTO 2: %s\n", nome_atr2);
    printf("- %s: %.2f\n", nome1, v1B, nome2, v2B);
    //printf("- %s: %.2f\n", nome2, v2B);
    
    printf("\n--- SOMA DOS ATRIBUTOS ---\n");
    printf("- %s (%s + %s): %.2f\n", nome1, nome2, nome_atr1, nome_atr2, soma1, soma2);
    //printf("- %s (%s + %s): %.2f\n", nome2, nome_atr1, nome_atr2, soma2);

    printf("\n*** VENCEDOR GERAL ***\n");
    
    // VENCEDOR FINAL (COM TERNÁRIO)
    printf("%s\n", 
        (soma1 == soma2) ? "Empate!" : 
        ((soma1 > soma2) ? nome1 : nome2)
    );
    
    printf("======================================================\n");

    return 0;
}