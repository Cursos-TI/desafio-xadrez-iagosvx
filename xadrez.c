#include <stdio.h>

int main() {

    const int casasTorre = 5;  
    const int casasBispo = 5;   
    const int casasRainha = 8;

   
    printf("Movimento do Bispo (Diagonal - Cima Direita):\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++; 
    }
    printf("\n");

    
    printf("Movimento da Torre (Horizontal - Direita):\n");
    for (int j = 0; j < casasTorre; j++) {
        printf("Direita\n");
    }
    printf("\n");

    
    printf("Movimento da Rainha (Horizontal - Esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++; 
    } while (k < casasRainha);
    printf("\n");
    
    int movimentosCavalo = 1; 
    printf("Movimento do Cavalo:\n");

    for (int m = 0; m < movimentosCavalo; m++) {
        int n = 0;

        while (n < 2) {
            printf("Baixo\n");
            n++;
        }

     
        printf("Esquerda\n");
    }

    
    return 0;
}