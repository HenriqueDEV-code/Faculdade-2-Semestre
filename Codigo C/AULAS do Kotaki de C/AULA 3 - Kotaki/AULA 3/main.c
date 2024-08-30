#include <stdio.h>



int main()
{
	// increment
	//int a = 0;
	//int b = ++a;
	// a =  a + 1;
	//printf("%d %d",b, a);

	/*
	int a = 0, b = 10;

	// formula composta
	a += 5;
	b *= 2;

	printf("%d %d",b, a);
	*/
	/*
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	puts("\nFIM");
	*/

	/*
	int i = 0;

	do
	{
		printf("%d", i);
		i++;
	} while (i < 10);
	*/


	// O FLUXO É SEGUENCIAL EXECUTA LINHA POR LINHA, PRESTAR A ATENCAO NA CRIACAO NO LACO DE REPETICAO

	//  KBHIT() CASO CLIQUE EM QUALQUER TECLA ELE TESTA A CONDIÇÃO E QUEBRA O LOOP


	/*
	int n = 0;

	while (n < 100)
	{
		scanf_s("%d", &n);
		printf("Boa noite\n");

		if (n == 100)
		{
			continue;
			printf("QUEBROU\n");
		}
	}
	*/


	int ValNivel;
	

	printf("Meu REI digita a quantidade de degraus: ");
	scanf_s(" %d", &ValNivel);

	
  // for linha
  
	for (int linha = 1; linha <= ValNivel; linha++)
	{
		// for coluna
		for (int coluna = 1; coluna <= linha; coluna++)
		
			printf("#");
		    putchar('\n');
	}


	






	return 0;
}