#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível "Mestre"

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // CARTA 1
    char estado1[3];
    char codigo1[5];
    char cidade1[30];
    unsigned long int populacao1; 
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    //CARTA 2
    char estado2[3];
    char codigo2[5];
    char cidade2[30];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;
  
    // Área para entrada de dados
    // dados da carta 1
    printf("\n====================================\n");
    printf("**** Seja-bem vindo(a) ao JOGO! ****\n");
    printf("====================================\n");
    printf("\n");
    printf("=== CARTA 1 ===\n");
    printf("\n");
    printf("Digite o Estado: "); 
    scanf("%2s", estado1);
    printf("Digite o Código: "); 
    scanf("%4s", codigo1);
    printf("Digite o Nome da Cidade: "); 
    scanf(" %[^\n]", cidade1);
    printf("Digite a quantidade da População: "); 
    scanf("%lu", &populacao1);
    printf("Digite a Área: "); 
    scanf("%f", &area1);
    printf("Digite o PIB: "); 
    scanf("%f", &pib1);
    printf("Digite os Pontos Turísticos: "); 
    scanf("%d", &pontos1);
    printf("\n");

    densidade1= populacao1 / area1;
    pib_per_capita1= (pib1 * 1e9) / populacao1;
    super_poder1= populacao1 + area1 + (pib1 * 1e9) + pib_per_capita1 + (1 / densidade1);
    
    
    //entrada de dados da carta 2
    
    printf("=== CARTA 2 ===\n");
    printf("\n");
    printf("Digite o Estado: "); 
    scanf("%2s", estado2);
    printf("Digite o Código: "); 
    scanf("%4s", codigo2);
    printf("Digite o Nome da Cidade: "); 
    scanf(" %[^\n]", cidade2);
    printf("Digite a quantidade da População: "); 
    scanf("%lu", &populacao2);
    printf("Digite a Área: "); 
    scanf("%f", &area2);
    printf("Digite o PIB: "); 
    scanf("%f", &pib2);
    printf("Digite os Pontos Turísticos: "); 
    scanf("%d", &pontos2);
    printf("\n");
    
    densidade2= populacao2 / area2;
    pib_per_capita2= pib2 / populacao2;
    super_poder2= populacao2 + area2 + (pib2 * 1e9) + pib_per_capita2 + (1 / densidade2);
  
    // Área para exibição dos dados da cidade
    
    printf("==== RESULTADO 1 ====\n");
    printf("\n");
    printf("Estado (A-H): %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("\n");
    
    printf("==== RESULTADO 2 ====\n");
    printf("\n");
    printf("Estado (A-H): %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("\n");
    
  
    // saída da comparação
    printf("==== COMPARAÇÃO DAS CARTAS ====\n");
    printf("\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2 );
    printf("\n");

    return 0;
}