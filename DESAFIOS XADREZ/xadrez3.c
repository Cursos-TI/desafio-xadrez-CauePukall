#include <stdio.h>

#define MOVES 3

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorre(casas - 1);
}

void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;
    printf("Diagonal Superior Direita (X: %d, Y: %d)\n", x + 1, y + 1);
    moverBispo(casas - 1, x + 1, y + 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    for (int i = 0; i < MOVES; i++) {
        for (int j = 0; j < MOVES; j++) {
            if (i == 2 && j == 1) {
                printf("Cavalo move: Duas casas para cima e uma para a direita\n");
                continue;
            }
        }
    }
}

void moverBispoLoops() {
    for (int i = 1; i <= MOVES; i++) {
        for (int j = 1; j <= MOVES; j++) {
            printf("Bispo move: Diagonal Superior Direita (X: %d, Y: %d)\n", i, j);
        }
    }
}

int main() {
    printf("Movimentação da Torre:\n");
    moverTorre(MOVES);
    printf("\n");
    
    printf("Movimentação do Bispo (Recursivo):\n");
    moverBispo(MOVES, 0, 0);
    printf("\n");
    
    printf("Movimentação da Rainha:\n");
    moverRainha(MOVES);
    printf("\n");
    
    printf("Movimentação do Cavalo:\n");
    moverCavalo();
    printf("\n");
    
    printf("Movimentação do Bispo (Loops Aninhados):\n");
    moverBispoLoops();
    
    return 0;
}
