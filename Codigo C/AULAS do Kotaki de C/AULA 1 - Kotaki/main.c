#include <stdio.h>



int main()
{
	




	/*int n1, n2, soma;
	printf("Digite o primeiro valor: ");
	scanf_s("%d", &n1);

	printf("\nDigite o primeiro valor: ");
    scanf_s ("%d", &n2);
	
	soma = n1 + n2;

	printf("\n A soma de n1 e n2: %d", soma);
	*/

	/*

	int num, dobro;


	printf("\tEntre com o numero: ");
	scanf_s("%d", &num);

	dobro =  num * 2;

	printf("\nO dobro do valor %d e: %d", num, dobro);  */

	float PrimeiroPO;
	float SegundoPO;
	float UniaoDeForca;
	printf("\t\t|--------------------------------------------------------------------------------------|\n ");
	printf("\t\t|Vamos Fundir as forcas mas, para isso preciso que me informe as forcas de cada Pokemon|\n ");
	printf("\t\t|--------------------------------------------------------------------------------------|\n\n\n ");
	printf("\t\t-Informe a forca do seu Pokemon (Pikachu): ");
	scanf_s("%f", &PrimeiroPO);
	printf("\n\n\t\t*Obbaa muito bem, agora informe o segundo Pokemon* !!!\n\n\n ");
	printf("\t\t-Informe a forca do seu Pokemon (Charmander): ");
	scanf_s("%f", &SegundoPO);

	UniaoDeForca = PrimeiroPO + SegundoPO;

	printf("\n\t Caso guerreiro seu novo Pokemon tera: %.2f ", UniaoDeForca , " de forca");
	return 0;

}