#include <stdio.h>

#define TAM 3 // Definindo o tamanho da matriz 3x3

void lerMatriz(int matriz[TAM][TAM], char nome) {
	printf("Digite os elementos da matriz %c (3x3):\n", nome);
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++) {
			printf("Elemento [%d][%d]: ", i + 1, j + 1);
			scanf_s("%d", &matriz[i][j]);
		}
	}
}

void exibirMatriz(int matriz[TAM][TAM], char nome) {
	printf("\nMatriz %c:\n", nome);
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void somaMatrizes(int matrizA[TAM][TAM], int matrizB[TAM][TAM], int matrizC[TAM][TAM]) {
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++) {
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
}


int main() {
	int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];

	// Ler os valores das matrizes A e B
	lerMatriz(A, 'A');
	lerMatriz(B, 'B');

	// Soma as matrizes A e B e armazena o resultado em C
	somaMatrizes(A, B, C);

	// Exibir as matrizes A, B e a soma C
	exibirMatriz(A, 'A');
	exibirMatriz(B, 'B');
	exibirMatriz(C, 'C');

	return 0;
}