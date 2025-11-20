#include <stdio.h>

int main() {

    // Dados da Carta 1
    char estado1[3], codigo1[10], nome1[50];
    int populacao1, pontos1;
    float area1, pib1;
    float densidade1, pib_per_capita1;

    // Dados da Carta 2
    char estado2[3], codigo2[10], nome2[50];
    int populacao2, pontos2;
    float area2, pib2;
    float densidade2, pib_per_capita2;

    // ================= CARTA 1 =================
    printf("=== Carta 1 ===\n");
    printf("Digite o Estado (A-H): "); scanf(" %2s", estado1);
    printf("Digite o Código (ex. A01, B02): "); scanf(" %9s", codigo1);
    printf("Digite a Cidade (caso seja nome composto inclua o espaço): "); scanf(" %[^\n]", nome1);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao1);
    printf("Digite a área em km² (use ponto, ex: 7522.33): "); scanf("%f", &area1);
    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): "); scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos turísticos: "); scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // ================= CARTA 2 =================
    printf("\n=== Carta 2 ===\n");
    printf("Digite o Estado (A-H): "); scanf(" %2s", estado2);
    printf("Digite o Código (ex. A01, B02): "); scanf(" %9s", codigo2);
    printf("Digite a Cidade (caso seja nome composto inclua o espaço): "); scanf(" %[^\n]", nome2);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao2);
    printf("Digite a área em km² (use ponto, ex: 7522.33): "); scanf("%f", &area2);
    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): "); scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos turísticos: "); scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ================= MENU INTERATIVO =================
    int opcao;
    printf("\n=====================\n");
    printf("        MENU\n");
    printf("=====================\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);

    int vencedor;

    printf("\n===== COMPARAÇÃO =====\n");
    printf("\n");
    printf("Comparando: %s  x  %s\n\n", nome1, nome2);

    switch(opcao) {

        case 1: // POPULAÇÃO
            printf("Atributo escolhido: POPULAÇÃO\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) vencedor = 1;
            else if (populacao1 < populacao2) vencedor = 2;
            else vencedor = 0;
            break;

        case 2: // ÁREA
            printf("Atributo escolhido: ÁREA\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) vencedor = 1;
            else if (area1 < area2) vencedor = 2;
            else vencedor = 0;
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) vencedor = 1;
            else if (pib1 < pib2) vencedor = 2;
            else vencedor = 0;
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);

            if (pontos1 > pontos2) vencedor = 1;
            else if (pontos1 < pontos2) vencedor = 2;
            else vencedor = 0;
            break;

        case 5: // DENSIDADE — MENOR VENCE
            printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) vencedor = 1;
            else if (densidade1 > densidade2) vencedor = 2;
            else vencedor = 0;
            break;

        case 6: // PIB PER CAPITA
            printf("Atributo escolhido: PIB PER CAPITA\n");
            printf("%s: %.2f\n", nome1, pib_per_capita1);
            printf("%s: %.2f\n", nome2, pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2) vencedor = 1;
            else if (pib_per_capita1 < pib_per_capita2) vencedor = 2;
            else vencedor = 0;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ============ EXIBE RESULTADO FINAL =============
    printf("\n===== RESULTADO =====\n");
    if (vencedor == 1)
        printf("\nVENCEDORA: CARTA 1 (%s)\n", nome1);
    else if (vencedor == 2)
        printf("\nVENCEDORA: CARTA 2 (%s)\n", nome2);
    else
        printf("\nRESULTADO: EMPATE!\n");


    printf("\n"); 
        
    return 0;
}
