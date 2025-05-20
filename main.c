#include <stdio.h>

int main() {
    // Número de casas para cada peça se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------------
    // Movimento da Torre (FOR)
    // -------------------------
    // A torre move-se em linha reta, neste caso para a direita.
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------
    // Movimento do Bispo (WHILE)
    // -------------------------
    // O bispo move-se na diagonal, neste caso para cima e à direita.
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------
    // Movimento da Rainha (DO-WHILE)
    // -------------------------
    // A rainha move-se em todas as direções. Neste caso, para a esquerda.
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}