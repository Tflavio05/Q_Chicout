#include <stdio.h>

int main() {
    int matriz[6][6] = {
        {2, 44, 75, 33, 53, 78},
        {10, 26, 38, 40, 67, 59},
        {20, 95, 63, 94, 39, 63},
        {26, 97, 17, 78, 78, 96},
        {44, 20, 45, 35, 14, 0},
        {67, 15, 94, 3, 80, 4}
    };

    int max_produto = 0;

    // Verificando produtos horizontais
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            int produto = matriz[i][j] * matriz[i][j+1] * matriz[i][j+2] * matriz[i][j+3];
            if (produto > max_produto) {
                max_produto = produto;
            }
        }
    }

    // Verificando produtos verticais
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            int produto = matriz[i][j] * matriz[i+1][j] * matriz[i+2][j] * matriz[i+3][j];
            if (produto > max_produto) {
                max_produto = produto;
            }
        }
    }

    // Verificando produtos diagonais (direção inferior direita)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int produto = matriz[i][j] * matriz[i+1][j+1] * matriz[i+2][j+2] * matriz[i+3][j+3];
            if (produto > max_produto) {
                max_produto = produto;
            }
        }
    }

    // Verificando produtos diagonais (direção inferior esquerda)
    for (int i = 0; i < 3; i++) {
        for (int j = 3; j < 6; j++) {
            int produto = matriz[i][j] * matriz[i+1][j-1] * matriz[i+2][j-2] * matriz[i+3][j-3];
            if (produto > max_produto) {
                max_produto = produto;
            }
        }
    }

    printf("Maior produto de quatro numeros adjacentes na matriz: %d\n", max_produto);

    return 0;
}
  
