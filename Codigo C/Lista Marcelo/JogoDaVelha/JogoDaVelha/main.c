#include <stdio.h>

char tabuleiro[3][3];
char jogador_atual = 'X';

// Função para inicializar o tabuleiro vazio
void inicializar_tabuleiro() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tabuleiro[i][j] = ' ';  // Espaço vazio
		}
	}
}

// Função para imprimir o tabuleiro
void exibir_tabuleiro() {
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %c ", tabuleiro[i][j]);
			if (j < 2) printf("|");
		}
		if (i < 2) printf("\n-----------\n");
	}
	printf("\n");
}

// Função para alternar o jogador
void alternar_jogador() {
	jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
}

// Função para verificar se houve um vencedor
char verificar_vencedor() {
	// Verifica linhas e colunas
	for (int i = 0; i < 3; i++) {
		if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
			return tabuleiro[i][0]; // Vencedor na linha
		if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
			return tabuleiro[0][i]; // Vencedor na coluna
	}

	// Verifica diagonais
	if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
		return tabuleiro[0][0]; // Diagonal principal
	if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
		return tabuleiro[0][2]; // Diagonal secundária

	return ' '; // Nenhum vencedor ainda
}

// Função para verificar se o tabuleiro está cheio (empate)
int verificar_empate() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (tabuleiro[i][j] == ' ')
				return 0; // Ainda há espaços vazios, sem empate
		}
	}
	return 1; // Tabuleiro cheio, empate
}

// Função para realizar uma jogada
int realizar_jogada(int linha, int coluna) {
	if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
		tabuleiro[linha][coluna] = jogador_atual;
		return 1; // Jogada válida
	}
	return 0; // Jogada inválida
}

int main() {
	int linha, coluna;
	char vencedor = ' ';
	int jogada_valida;

	inicializar_tabuleiro();

	// Loop do jogo
	while (1) {
		Sleep(2);
		system("CLS");
		exibir_tabuleiro();
		printf("Jogador %c, entre com a linha e coluna (0, 1 ou 2): ", jogador_atual);
		scanf_s("%d %d", &linha, &coluna);

		jogada_valida = realizar_jogada(linha, coluna);
		if (!jogada_valida) {
			printf("Jogada invalida! Tente novamente.\n");
			continue;
		}

		// Verifica se há um vencedor
		vencedor = verificar_vencedor();
		if (vencedor != ' ') {
			exibir_tabuleiro();
			printf("Jogador %c venceu!\n", vencedor);
			break;
		}

		// Verifica empate
		if (verificar_empate()) {
			exibir_tabuleiro();
			printf("Empate!\n");
			break;
		}

		// Alterna para o próximo jogador
		alternar_jogador();
	}

	return 0;
}