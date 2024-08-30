#include <stdio.h>
/*
void Zero() {
	printf("\n\t TABUADA DO Zero\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t0x %d = %d\n", i, 0 * i);
	}
 }
void um() {

	printf("\n\t TABUADA DO UM\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t1x %d = %d\n", i, 1 * i);
	}
}
void dois() {

	printf("\n\t TABUADA DO DOIS\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t2x %d = %d\n", i, 2 * i);
	}
}
void tres() {

	printf("\n\t TABUADA DO TRES\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t3x %d = %d\n", i, 3 * i);
	}
}
void quatro() {

	printf("\n\t TABUADA DO QUATRO\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t4x %d = %d\n", i, 4 * i);
	}
}
void cinco() {

	printf("\n\t TABUADA DO CINCO\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t5x %d = %d\n", i, 5 * i);
	}
}
void seis() {

	printf("\n\t TABUADA DO SEIS\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t6x %d = %d\n", i, 6 * i);
	}
}
void sete() {

	printf("\n\t TABUADA DO SETE\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t7x %d = %d\n", i, 7 * i);
	}
}
void oito() {

	printf("\n\t TABUADA DO OITO\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t8x %d = %d\n", i, 8 * i);
	}
}
void nove() {

	printf("\n\t TABUADA DO NOVE\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t9x %d = %d\n", i, 9 * i);
	}
}
void dez() {

	printf("\n\t TABUADA DO DEZ\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("\t10x %d = %d\n", i, 10 * i);
	}
}


int main()
{

	int opcao;
	INICIO:
	printf("\n\nQual tabela da tabuada deseja exibir? ex: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10\n");
	printf(">>>");
	scanf_s("%d", &opcao);

	if (opcao == 0) {
		Zero();
	}
	else if (opcao == 1)
	{
		um();
		goto INICIO;
	}
	else if (opcao == 2)
	{
		dois();
		goto INICIO;

	}
	else if (opcao == 3) {
		tres();
		goto INICIO;

	}
	else if (opcao == 4) {
		quatro();
		goto INICIO;

	}
	else if (opcao == 5) {
		cinco();
		goto INICIO;

	}
	else if (opcao == 6){
		seis();
		goto INICIO;

	}
	else if (opcao == 7) {
		sete();
		goto INICIO;

	}
	else if (opcao == 8) {
		oito();
		goto INICIO;

	}
	else if (opcao == 9) {
		nove();
		goto INICIO;

	}
	else if (opcao == 10) {
		dez();
		goto INICIO;

	}
	else {
		goto INICIO;  
	}

		return 0;
}*/



int main() {


	for (int tab = 0; tab <= 10; tab++)
	{
		printf("\n\nTabuada do %d", tab);
		for (int x = 0; x <= 10; x++)
		{
			printf("\n\n%d x %d = %d", tab, x, tab * x);

		}
	}
	return 0;
}