#include <stdio.h>

// =================== Funções Recursivas ===================

// TORRE: Move 'n' casas para a Direita, recursivamente
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// BISPO: Movimento em diagonal "Cima Direita" usando recursividade + loops aninhados
void moverBispo(int passos) {
    for (int i = 0; i < passos; i++) {
        for (int j = 0; j < 1; j++) { // loop interno (horizontal)
            printf("Direita\n");
        }
        printf("Cima\n"); // loop externo (vertical)
    }
}

// BISPO: versão recursiva que imprime "Cima Direita"
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// RAINHA: Move 'n' casas para a Esquerda, recursivamente
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// =================== Cavalo com Loops Complexos ===================

void moverCavalo() {
    // O cavalo vai fazer um movimento em L: duas casas para cima e uma para a direita
    // Usando loops aninhados com múltiplas condições
    int movimentos = 1; // Quantas vezes o L será executado

    printf("Movimento do Cavalo (duas casas para Cima, uma para a Direita):\n");

    for (int i = 0; i < movimentos; i++) {
        for (int vertical = 0; vertical < 3; vertical++) {
            if (vertical < 2) {
                printf("Cima\n");
            } else if (vertical == 2) {
                for (int horizontal = 0; horizontal < 1; horizontal++) {
                    if (horizontal != 0) continue; // só um passo
                    printf("Direita\n");
                    break; // fim do L
                }
            }
        }
    }
}

// =================== Função principal ===================

int main() {
    // ---------- TORRE ----------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    // ---------- BISPO ----------
    printf("\nMovimento do Bispo (recursivo - 5 casas na diagonal Cima Direita):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (com loops aninhados - 5 passos):\n");
    moverBispo(5);

    // ---------- RAINHA ----------
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    // ---------- CAVALO ----------
    printf("\n");
    moverCavalo();

    return 0;
}
