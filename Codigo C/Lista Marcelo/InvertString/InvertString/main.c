#include <stdio.h>


void InverteString(char* str)
{
	int inicio = 0;
	int fim = strlen(str) - 1;
	char temp;

	while (inicio < fim)
	{
		temp = str[inicio];
		str[inicio] = str[fim];
		str[fim] = temp;
		inicio++;
		fim--;
	}
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
	// inverte a string
	InverteString(str);
	printf("String invertida: %s", str);

	return 0;
}