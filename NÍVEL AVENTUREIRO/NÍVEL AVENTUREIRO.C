#include <stdio.h>

#define TAM 10

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n=== Tabuleiro ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Navio horizontal
    int xH = 1, yH = 2, tamanhoH = 4;
    for (int i = 0; i < tamanhoH; i++) {
        tabuleiro[xH][yH + i] = 3;
    }

    // Navio vertical
    int xV = 4, yV = 5, tamanhoV = 3;
    for (int i = 0; i < tamanhoV; i++) {
        tabuleiro[xV + i][yV] = 3;
    }

    // Navio diagonal (↘)
    int xD1 = 0, yD1 = 0, tamanhoD1 = 4;
    for (int i = 0; i < tamanhoD1; i++) {
        tabuleiro[xD1 + i][yD1 + i] = 3;
    }

    // Navio diagonal (↙)
    int xD2 = 0, yD2 = 9, tamanhoD2 = 3;
    for (int i = 0; i < tamanhoD2; i++) {
        tabuleiro[xD2 + i][yD2 - i] = 3;
    }

    // Exibe o tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}
