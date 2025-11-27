#include <stdio.h>

int main() {
    // CARTA 1
    char pais1[3];
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
    char pais2[3];
    char codigo2[5];
    char cidade2[30];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;
    

    // entrada de dados da carta 1
    printf("\n====================================\n");
    printf("**** Seja-bem vindo(a) ao JOGO! ****\n");
    printf("====================================\n");
    printf("\n");
    printf("=== CARTA 1 ===\n");
    printf("\n");
    printf("Digite o Pais: "); 
    scanf("%2s", pais1);
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
    printf("Digite o Pais: "); 
    scanf("%2s", pais2);
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
    
    // saída de dados 
    printf("==== RESULTADO 1 ====\n");
    printf("\n");
    printf("Pais (A-H): %s\n", pais1);
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
    printf("Pais (A-H): %s\n", pais2);
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
    //printf("==== COMPARAÇÃO DAS CARTAS ====\n");
    //printf("\n");
    //printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    //printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    //printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    //printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    //printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    //printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    //printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2 );
    //printf("\n");
    
    // criar o menu das escolhas
    int escolha;
    printf("==== ESCOLHA O ATRIBUTO ====\n\n");
    printf("1 - População\n"); // aqui ele não especifica a variável ex. %d e etc 
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Números de Pontos Turísticos\n\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha); // aqui é onde digita para sair as escolhas
    printf("\n");

    // criar as comparações com as variáveis 
    printf("==== COMPARAÇÃO FINAL ====\n");
    printf("\n");
        
    // adicionar o nome dos países    
            printf("* Pais 1: %s\n", cidade1);
            printf("* Pais 2: %s\n", cidade2);
          
    // criar as variáveis das escolhas do tipo switch
    switch (escolha) {

        case 1: // escolha 1
           
            printf("* Atributo escolhido: POPULAÇÃO\n");
            printf("* Carta 1: %lu\n", populacao1); // aqui são os valores das entradas lá das entradas dos dados
            printf("* Carta 2: %lu\n", populacao2);

            if (populacao1 > populacao2)
                printf("* Carta 1 venceu!\n");
            else if  (populacao2 > populacao1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;

        case 2: // escolha 2
            printf("* Atributo escolhido: ÁREA\n");
            printf("* Carta 1: %.2f\n", area1);
            printf("* Carta 2: %.2f\n", area2);

            if (area1 > area2)
                printf("* Carta 1 venceu!\n");
            else if (area2 > area1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;

        case 3: // escolha 3
            printf("* Atributo escolhido: PIB\n");
            printf("* Carta 1: %.2f bilhões\n", pib1);
            printf("* Carta 2: %.2f bilhões\n", pib2);

            if (pib1 > pib2)
                printf("* Carta 1 venceu!\n");
            else if (pib2 > pib1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;

        case 4: // escolha 4
            printf("* Atributo escolhido: DENSIDADE DEMOGRÁFICA\n");
            printf("* Carta 1: %.2f\n", densidade1);
            printf("* Carta 2: %.2f\n", densidade2);

            if (densidade1 < densidade2) // menor vence
                printf("* Carta 1 venceu!\n");
            else if (densidade2 < densidade1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;

        case 5: // escolha 5
            printf("* Atributo escolhido: PIB PER CAPITA\n");
            printf("* Carta 1: %.2f\n", pib_per_capita1);
            printf("* Carta 2: %.2f\n", pib_per_capita2);

            if (pib_per_capita1 > pib_per_capita2)
                printf("* Carta 1 venceu!\n");
            else if (pib_per_capita2 > pib_per_capita1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;

            case 6: // escolha 5
            printf("* Atributo Escolhido: PONTOS TURÍSTICOS\n");
            printf("* Carta 1: %d\n", pontos1);
            printf("* Carta 2: %d\n", pontos2);
            
            if (pontos1 > pontos2)
                printf("* Carta 1 venceu!\n");
            else if (pontos2 > pontos1)
                printf("* Carta 2 venceu!\n");
            else
                printf("* Empate!\n");
            break;
    
            default:
                printf("* Opção inválida!\n");
            break;
           
    }
            printf("\n");
    return 0;
}