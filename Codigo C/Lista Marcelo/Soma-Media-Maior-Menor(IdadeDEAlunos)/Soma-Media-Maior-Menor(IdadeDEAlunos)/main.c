#include <stdio.h>
#include <stdlib.h>

int main() {
	int QNT_Alunos = 0, idade = 0, soma = 0, maiorIdade = 0, menorIdade = 0;
	float  media = 0.0;

	printf("Entra com a quantidade de alunos: ");
	scanf_s("%d", &QNT_Alunos);
	for (int i = 0; i < QNT_Alunos; i++) {
		printf("Aluno (%d) Digite a idade: ", i + 1);
		scanf_s("%d", &idade);
		soma += idade;
		media = (float)soma / QNT_Alunos;
		if (i == 0) {
			maiorIdade = idade;
			menorIdade = idade;
		}
		else {
			// Verificar se a idade atual é a maior
			if (idade > maiorIdade) {
				maiorIdade = idade;
			}
			// Verificar se a idade atual é a menor
			if (idade < menorIdade) {
				menorIdade = idade;
			}
		}
	}
	printf("A soma das idades e: %d\n", soma);
	printf("A Media das idades e: %.2f\n", media);
	printf("O aluno mais velho e: %d\n", maiorIdade);
	printf("O aluno mais novo e: %d\n", menorIdade);
	return 0;

}