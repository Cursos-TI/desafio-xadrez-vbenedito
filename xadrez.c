#include <stdio.h>

int main() {
    // =============================
    // Movimento da Torre: 5 casas à Direita
    // Estrutura usada: for
    // =============================
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // =============================
    // Movimento do Bispo: 5 casas na diagonal Cima Direita
    // Estrutura usada: while
    // =============================
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // =============================
    // Movimento da Rainha: 8 casas para a Esquerda
    // Estrutura usada: do-while
    // =============================
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // =============================
    // Movimento do Cavalo: 2 casas para Baixo, 1 casa para a Esquerda (movimento em L)
    // Estruturas usadas: for (externo) + while (interno)
    // =============================
    printf("\nMovimento do Cavalo (2 casas para Baixo, 1 para a Esquerda):\n");

    int movimentos = 1; // Número de vezes que o movimento completo será simulado (pode aumentar se quiser mais passos em L)

    for (int l = 0; l < movimentos; l++) {
        // Duas casas para baixo
        int contador = 0;
        while (contador < 2) {
            printf("Baixo\n");
            contador++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}