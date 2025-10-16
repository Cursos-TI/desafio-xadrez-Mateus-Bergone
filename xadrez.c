#include <stdio.h>

int main() {

    //Mover torre
    printf("Movendo torre... \n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    //Mover rainha
    printf("\nMovendo rainha... \n");
    int i = 1;

    while (i <= 8) {
        printf("Esquerda\n");
        i++;
    }

    //Mover bispo
    printf("\nMovendo bispo... \n");
    int bispo = 1;
    do {
        printf("Cima, Direita\n");
        bispo++;
    } while (bispo <= 5);

    return 0;
}

