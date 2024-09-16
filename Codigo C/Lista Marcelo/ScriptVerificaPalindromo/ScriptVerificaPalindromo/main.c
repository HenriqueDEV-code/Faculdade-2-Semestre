#include <stdio.h>
#include <string.h>
#include <ctype.h>


int VerificaSePalindromo(char* str)
{
	int inicio = 0;
	int fim = strlen(str) - 1;

	while (inicio < fim)
	{
		// Ignora a diferenca de maiusculas e minusculas
		if (tolower(str[inicio]) != tolower(str[fim]))
		{
			return 0; // significa que não é palídromo
		}
		inicio++;
		fim--;
	}
	return 1; // retorna 1 para caso seja palídromo
}

int main() {

	char str[101];
	printf("Digite uma string: ");
	fgets(str, sizeof(str), stdin);
	// Verifica se a última posição contém '\n' e remove
	size_t len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}
	if (VerificaSePalindromo(str))
	{
		printf("A string '%s' e um palidromo.\n", str);
	}
	else {
		printf("A string '%s' nao e um palidromo.\n", str);
	}



	return 0;
}