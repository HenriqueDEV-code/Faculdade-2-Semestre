#include <stdio.h>

#define TAM 3 // Definindo o tamanho da matriz 3x3

// Fun��o para verificar se a matriz � um quadrado m�gico
int ehQuadradoMagico(int matriz[TAM][TAM]) {
    int somaLinha, somaColuna;
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;

    // Calcular a soma das diagonais
    for (int i = 0; i < TAM; i++) {
        somaDiagonalPrincipal += matriz[i][i];  // Diagonal principal
        somaDiagonalSecundaria += matriz[i][TAM - 1 - i];  // Diagonal secund�ria
    }

    // Verificar a soma das linhas e colunas
    int somaReferencia = somaDiagonalPrincipal; // Usar a soma da diagonal principal como refer�ncia
    for (int i = 0; i < TAM; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for (int j = 0; j < TAM; j++) {
            somaLinha += matriz[i][j];  // Soma da linha
            somaColuna += matriz[j][i];  // Soma da coluna
        }

        // Verificar se a soma da linha e da coluna s�o iguais � soma de refer�ncia
        if (somaLinha != somaReferencia || somaColuna != somaReferencia) {
            return 0; // N�o � um quadrado m�gico
        }
    }

    // Verificar se as diagonais tamb�m possuem a soma de refer�ncia
    if (somaDiagonalPrincipal != somaReferencia || somaDiagonalSecundaria != somaReferencia) {
        return 0; // N�o � um quadrado m�gico
    }

    return 1; // � um quadrado m�gico
}

int main() {
    int matriz[TAM][TAM];

    // Entrada de dados para a matriz 3x3
    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf_s("%d", &matriz[i][j]);
        }
    }

    // Verificar se a matriz � um quadrado m�gico
    if (ehQuadradoMagico(matriz)) {
        printf("\nA matriz e um quadrado magico!\n");
    }
    else {
        printf("\nA matriz NAO e um quadrado magico!\n");
    }

    return 0;
}