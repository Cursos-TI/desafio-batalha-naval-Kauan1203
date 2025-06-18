#include <stdio.h>

#define TAM 10  // Tamanho do tabuleiro

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializa o tabuleiro com 0

    // Navio horizontal com 4 posições
    int x_inicio_horizontal = 2;
    int y_inicio_horizontal = 3;
    int tamanho_horizontal = 4;

    printf("Navio Horizontal (tamanho %d):\n", tamanho_horizontal);
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[x_inicio_horizontal][y_inicio_horizontal + i] = 1;
        printf("(%d, %d)\n", x_inicio_horizontal, y_inicio_horizontal + i);
    }

    // Navio vertical com 3 posições
    int x_inicio_vertical = 5;
    int y_inicio_vertical = 6;
    int tamanho_vertical = 3;

    printf("\nNavio Vertical (tamanho %d):\n", tamanho_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[x_inicio_vertical + i][y_inicio_vertical] = 2;
        printf("(%d, %d)\n", x_inicio_vertical + i, y_inicio_vertical);
    }

    return 0;
}
