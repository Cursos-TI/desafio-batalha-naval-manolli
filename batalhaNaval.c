#include <stdio.h>

#define TAMANHO 10

void nivelNovato() {
    int tabuleiro[5][5] = {0};

    // Navio vertical (posição fixa)
    int x1 = 0, y1 = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x1 + i][y1] = 1;
        printf("Navio vertical - parte %d: (%d, %d)\n", i + 1, x1 + i, y1);
    }

    // Navio horizontal (posição fixa)
    int x2 = 4, y2 = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x2][y2 + i] = 2;
        printf("Navio horizontal - parte %d: (%d, %d)\n", i + 1, x2, y2 + i);
    }

    printf("\n");
}

void nivelAventureiro() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    // Navio horizontal
    for (int i = 0; i < 4; i++) {
        tabuleiro[6][5 + i] = 3;
    }

    // Navio na diagonal principal
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][2 + i] = 3;
    }

    // Navio na diagonal secundária
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7 - i] = 3;
    }

    // Mostrar o tabuleiro completo
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void nivelMestre() {
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Mostrar cone
    printf("Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Mostrar cruz
    printf("\nCruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Mostrar octaedro
    printf("\nOctaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
