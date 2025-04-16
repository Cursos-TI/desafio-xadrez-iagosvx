#include <stdio.h>


void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}


void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) { 
        for (int j = 0; j < 1; j++) { 
            printf("Cima Direita\n");
        }
    }
}


void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
                continue;
            }

            if (j == 2) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    const int casasTorre = 5;  
    const int casasBispo = 5;   
    const int casasRainha = 8;
    const int movimentosCavalo = 3;

   
    printf("Movimento do Bispo (Recursivo - Diagonal Cima Direita):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento da Torre (Recursivo - Direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento da Rainha (Recursivo - Esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");


    printf("Movimento do Cavalo (Loops complexos - Cima Cima Direita):\n");
    moverCavalo(movimentosCavalo);
    printf("\n");


    printf("Movimento do Bispo (Loops aninhados - Diagonal Cima Direita):\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    return 0;
}