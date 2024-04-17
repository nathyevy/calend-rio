#include <stdio.h>

int main() {
    int calendario[5][6];
    int numero = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (numero <= 30) {
                calendario[i][j] = numero;
                numero++;
            } else {
                calendario[i][j] = 0;
            }
        }
    }

    printf("Calendário:\n");
    printf("----------------------\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (calendario[i][j] != 0) {
                printf("%2d ", calendario[i][j]);
            } else {
                printf("   "); 
            }
        }
        printf("\n");
    }

    return 0;
}

