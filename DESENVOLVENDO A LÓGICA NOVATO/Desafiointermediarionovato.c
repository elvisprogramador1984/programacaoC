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
    printf("Digite o estado (A-H): "); scanf(" %2s", estado1);
    printf("Digite o Código (A01): "); scanf(" %9s", codigo1);
    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): "); scanf(" %[^\n]", nome1);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao1);
    printf("Digite a Área em km² (use o ponto ex: 7522.33): "); scanf("%f", &area1);
    printf("Digite o PIB em bilhões (use ponto, ex: 889.30): "); scanf("%f", &pib1);
    printf("Digite o número de Pontos turísticos: "); scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // ================= CARTA 2 =================
    printf("\n=== Carta 2 ===\n");
    printf("Digite o estado (A-H): "); scanf(" %2s", estado2);
    printf("Digite o Código (A01): "); scanf(" %9s", codigo2);
    printf("Digite o nome da cidade (incluir espaços para nomes compostos, ex: JOÃO PESSOA): "); scanf(" %[^\n]", nome2);
    printf("Digite a População (sem o ponto): "); scanf("%d", &populacao2);
    printf("Digite a Área em km² (use o ponto ex: 7522.33): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Digite o número de Pontos turísticos: "); scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n========================================\n");
    printf("     COMPARAÇÃO DE CARTAS - RESULTADOS\n");
    printf("========================================\n\n");

    int resultado;

    // Função auxiliar para imprimir
    #define MOSTRAR(atributo, valor1, valor2, condicao) \
        printf("%s:\n", atributo); \
        printf("  Carta 1: %.2f\n", (double)valor1); \
        printf("  Carta 2: %.2f\n", (double)valor2); \
        if ((condicao)) resultado = 1; \
        else if ((valor2) == (valor1)) resultado = 2; \
        else resultado = 0; \
        if (resultado == 1) printf("  Resultado: Carta 1 venceu (1)\n\n"); \
        else if (resultado == 0) printf("  Resultado: Carta 2 venceu (0)\n\n"); \
        else printf("  Resultado: Empate (2)\n\n");

    // 1 — POPULAÇÃO
    MOSTRAR("População",
            populacao1, populacao2,
            populacao1 > populacao2);

    // 2 — ÁREA
    MOSTRAR("Área",
            area1, area2,
            area1 > area2);

    // 3 — PIB
    MOSTRAR("PIB",
            pib1, pib2,
            pib1 > pib2);

    // 4 — PONTOS TURÍSTICOS
    MOSTRAR("Pontos Turísticos",
            pontos1, pontos2,
            pontos1 > pontos2);

    // 5 — DENSIDADE (MENOR VENCE)
    printf("Densidade Populacional:\n");
    printf("  Carta 1: %.2f\n", densidade1);
    printf("  Carta 2: %.2f\n", densidade2);

    if (densidade1 < densidade2) resultado = 1;
    else if (densidade1 == densidade2) resultado = 2;
    else resultado = 0;

    if (resultado == 1) printf("  Resultado: Carta 1 venceu (1)\n\n");
    else if (resultado == 0) printf("  Resultado: Carta 2 venceu (0)\n\n");
    else printf("  Resultado: Empate (2)\n\n");

    // 6 — PIB PER CAPITA
    MOSTRAR("PIB per Capita",
            pib_per_capita1, pib_per_capita2,
            pib_per_capita1 > pib_per_capita2);

    return 0;
}
