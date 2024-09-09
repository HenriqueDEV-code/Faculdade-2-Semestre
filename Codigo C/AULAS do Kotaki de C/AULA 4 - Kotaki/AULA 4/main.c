/*
* AULA 4 DA FACULDADE
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3

int main()
{
	/*
	 int Valor[100]; vetor: tipo nome e [tamanho]; 
	 int Valor[3] = { 10, 12, 13};  vetor
	 valor[indice]    0   1   2
     se quiser ler o valor do indece especifico no vetor: valor[2]; console: 12

	 */
	/*
	int notas[3] = { 10.0, 1.5, 7.8 };

	float media;
	media = (notas[0] + notas[1] + notas[2]) / 3;
	printf("Media %.2f", media);*/
	/*
	float Notas[N];
	float media = 0.0;

	for (int i = 0; i < N; i++)
	{
		scanf_s("%f", &Notas[i]);
	}

	for (int i = 0; i < N; i++)
	{
		media += Notas[i];
	}
	media /= N;

	printf("%.2f", media);
	//*/
	/*
	char str[100] = "Ola";
	
	printf("%s\n", str);
	fgets(str, sizeof(str), stdin);
	
	printf("%s\n", str);
    */
	/*
	char str1[100] = "Ola";
	char str2[100] = "Alo";

	//printf("%d", strcmp(str1, str2));

	strcpy(str1, str2);
	printf("%s", str1);
	printf("%s", str2);

	// str1[strlen(str1) -1] = '\0';

	*/
	/*
    char str[100] = "Vamos la";
	strcpy_s(str, sizeof(str), "O que Pensar de C");
	printf("%s", str);*/

	char str[100] = "Vamos la";


	return 0;
}