#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}