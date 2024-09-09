/*
* AULA 2 SEGUNDA SEMANA DE PROGRAMACAO EM C COM PROFESSOR KOTAKI
* O QUE VAI SER ABORDADO
* RELACIONAIS E LOGICOS

*/


#include <stdio.h>



int main()
{

	// EXERCICIO 07 INFORMA QUAL NUMERO APARECERA POR EXTENSO

	printf("- Informe um valor\n");
	int Op;
	printf("\n 1- UM");
	printf("\n 2- DOIS");
	printf("\n 3- TRES");
	printf("\n 4- QUATRO");
	printf("\n 5- CINCO\n>>>");
	scanf_s(" %d", &Op);
	
	switch (Op)
	{
	case 1: 
		printf("UM");
		break;
	case 2:
		printf("DOIS");
		break;
	case 3:
		printf("TRES");
		break;
	case 4:
		printf("QUATRO");
		break;
	case 5:
		printf("CINCO");
		break;
	default:
		printf("Valor invalida !");
		break;
	}




	/*

	// EXERCICIO CALCULO DO IMC


	printf("\t - CALCULO DO IMC - \n\n");

	float Altura, Peso;
	float IMC;

	printf("Para calcular precisamos de algumas informacoes. \n - Informe sua altura \n>>>");
	scanf_s(" %f", &Altura);
	printf("\n Ja armazenamos a sua altura, mas para calcular dependemos do seu peso.");
	printf(" \n- Informe peso \n>>>");
	scanf_s(" %f", &Peso);


	IMC = Peso / (Altura * Altura);

	if (IMC < 17)
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Muito abaixo do *PESO*\n", IMC);
		
	}
	else if (IMC == 17 || IMC <= 18.49) {
		printf("\n-SITUACAO-\n");
		printf("%.2f - Abaixo do *PESO*\n", IMC);
	}
	else if (IMC == 18.5 || IMC <= 24.99)
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Peso *NORMAL*\n", IMC);
	}
	else if (IMC == 25 || IMC <= 29.99)
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Acima do *PESO*\n", IMC);
	}
	else if (IMC == 30 || IMC <= 34.99)
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Obesidade I\n", IMC);
	}
	else if (IMC == 35 || IMC <= 39.99)
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Obesidade II (Severa)\n", IMC);
	}
	else
	{
		printf("\n-SITUACAO-\n");
		printf("%.2f - Obesidade III (Morbida)\n", IMC);
	}
	*/


	/*

	char resp;

	printf("Esta certo disso? ");
	scanf_s(" %c", &resp);
	switch (resp)
	{

	case 's': printf("Esta OK!");
		break;

	case 'S': printf("Esta OK!");
		break;

	case 'n': printf("Esta OK!");
		break;

	case 'N': printf("Esta OK!");
		break;


	default:
		printf("Resposta invalida");
		break;
	}

	*/



	/*
	char resp;

	printf("Esta certo disso? ");
	scanf_s(" %c", &resp);


	if (resp == 's' || resp == 'S')
	{
		printf("Esta OK!");
	}
	else if (resp == 'n' || resp == 'N')
	{
		printf("BLZ !");

	}
	else {
		printf("Resposta invalida");
	}
	*/









	/*
	int num1, num2;

	printf("Digite valor 1: ");
	scanf_s("%d", &num1);
	printf("Digite valor 2: ");
	scanf_s("%d", &num2);

	*/











	/*
	*  ? = Se 
	*  : = Se nao
	* 
	int a = 20, b;

	b = a < 15 ? 5 : 50;

	printf("%d", b);

	*/


	/*
	if (num1 = 10 && num2 == 15)
	{
		printf("Tudo certo");
	}
	else {
		printf("Tudo errado");
	}
	*/




  /*
	if (num1 == 10)
	{
		if (num2 == 15)
		{
			printf("Tudo certo");
		}
		else {
			printf("Tudo errado");
		}
	}
	else {
		printf("Tudo errado");
	}
	*/



	/*
	if (num1 == num2)
	{
		printf("Sao iguais");
	}
	else {
		printf("Sao diferentes");
	}
	*/







	return 0;
}