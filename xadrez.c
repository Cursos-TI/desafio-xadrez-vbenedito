#include <stdio.h>

int main() {
    
    // Simulação da movimentação da Torre
    // Movimento: 5 casas para a direita
    // Estrutura usada: for
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação da movimentação do Bispo
    // Movimento: 5 casas na diagonal para cima e à direita
    // Estrutura usada: while
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Simulação da movimentação da Rainha
    // Movimento: 8 casas para a esquerda
    // Estrutura usada: do-while
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}