#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAXIMO 100

void exibirPalavra(char* palavra, int* letrasDescobertas, int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		if (letrasDescobertas[i]) {
			printf("%c ", palavra[i]);
		}
		else {
			printf("_ ");
		}
	}
	printf("\n");
}

int jaFoiEscolhida(char letra, char* letrasEscolhidas, int totalEscolhidas) {
	for (int i = 0; i < totalEscolhidas; i++) {
		if (letrasEscolhidas[i] == letra) {
			return 1; // Letra já escolhida
		}
	}
	return 0;
}

int adivinharLetra(char letra, char* palavra, int* letrasDescobertas, int tamanho) {
	int acertou = 0;
	for (int i = 0; i < tamanho; i++) {
		if (tolower(palavra[i]) == tolower(letra)) {
			letrasDescobertas[i] = 1;
			acertou = 1;
		}
	}
	return acertou;
}

int palavraCompleta(int* letrasDescobertas, int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		if (!letrasDescobertas[i]) {
			return 0; // Ainda faltam letras
		}
	}
	return 1; // Todas as letras foram descobertas
}

int main() {
	char palavraSecreta[TAMANHO_MAXIMO] = "programacao";  // Palavra secreta
	int tamanhoPalavra = strlen(palavraSecreta);          // Tamanho da palavra
	int letrasDescobertas[TAMANHO_MAXIMO] = { 0 };          // Letras descobertas
	char letrasEscolhidas[TAMANHO_MAXIMO] = { 0 };          // Letras já escolhidas
	int tentativasRestantes = 6;                          // Número de tentativas
	int totalEscolhidas = 0;                              // Total de letras escolhidas

	printf("Bem-vindo ao jogo da forca!\n");

	// Loop do jogo
	while (tentativasRestantes > 0) {
		printf("\nTentativas restantes: %d\n", tentativasRestantes);
		printf("Palavra: ");
		exibirPalavra(palavraSecreta, letrasDescobertas, tamanhoPalavra);

		// Pede uma letra ao jogador
		char letra;
		printf("Digite uma letra: ");
		scanf_s(" %c", &letra);

		// Verifica se a letra já foi escolhida
		if (jaFoiEscolhida(letra, letrasEscolhidas, totalEscolhidas)) {
			printf("Voce ja escolheu essa letra! Tente novamente.\n");
			continue;
		}

		// Armazena a letra escolhida
		letrasEscolhidas[totalEscolhidas++] = letra;

		// Verifica se a letra está na palavra
		if (adivinharLetra(letra, palavraSecreta, letrasDescobertas, tamanhoPalavra)) {
			printf("Boa! A letra '%c' esta na palavra.\n", letra);
		}
		else {
			printf("A letra '%c' nao esta na palavra.\n", letra);
			tentativasRestantes--;
		}

		// Verifica se a palavra está completa
		if (palavraCompleta(letrasDescobertas, tamanhoPalavra)) {
			printf("\nParabens! Voce acertou a palavra: %s\n", palavraSecreta);
			break;
		}
	}

	// Se o jogador perder
	if (tentativasRestantes == 0) {
		printf("\nVoce perdeu! A palavra era: %s\n", palavraSecreta);
	}

	return 0;
}