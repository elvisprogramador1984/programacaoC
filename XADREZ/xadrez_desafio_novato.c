#include <stdio.h>

int main() {

    // ===========================
    // TORRE (for) – 5 casas à direita
    // ===========================
    
    printf("Movimento da TORRE:\n");
        
    for(int i = 1; i <= 5; i++) {
       printf("Direita\n");
       
   }

    // ===========================
    // BISPO (while) – 5 casas na diagonal (Cima + Direita)
    // ===========================
   
    printf("\nMovimento do BISPO:\n");
    
    int casasB = 5;
    int contadorB = 1;

    while(contadorB <= casasB) {
        printf("Cima e Direita\n");
        contadorB++;
    }
    // ===========================
    // RAINHA (do-while) – 8 casas à esquerda
    // ===========================
    
    // digitar as saídas
    printf("\nMovimento da RAINHA:\n");
    
    // Digitar as variáveis 
    int casasR = 8;
    int contadorR = 1;
    
    do {
        printf("Esquerda\n");
    // incluir o incremento para evitar o loop infinito    
        contadorR++;
    }   while(contadorR <= casasR);
    
    // ===========================
    // CAVALO (for) – 2 casas para baixo e 1 casa para a esquerda formando um "L"
    // ===========================
    
    // Digitar as saídas
    
    printf("\nMovimento do CAVALO:\n");
    
    // Digitar o primeiro movimento: duas casas para "BAIXO"

    for(int i = 1; i <= 2; i++) { 
        printf("Baixo\n");
    
    while(i == 2) {
        //int esquerda = 1;
        printf("Esquerda\n");
        //esquerda++;
        break;
    }
        
    }
    
    printf("\n");


    return 0;
}
