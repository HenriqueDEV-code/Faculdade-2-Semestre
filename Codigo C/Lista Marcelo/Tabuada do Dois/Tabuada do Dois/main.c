#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        int num1, num2, resposta_usuario, soma, jogar_novamente;

        srand(time(NULL));

        do {
            
            num1 = rand() % 100 + 1;
            num2 = rand() % 100 + 1;

            
            soma = num1 + num2;

            
            printf("Qual e o resultado da soma de %d + %d = ", num1, num2);
            scanf_s("%d", &resposta_usuario);

            if (resposta_usuario == soma) {
                printf("Parabens! Voce acertou.\n");
            }
            else {
                printf("Voce errou. O resultado correto e %d.\n", soma);
            }

            printf("Deseja jogar novamente? (1 - Sim, 0 - Nao): ");
            scanf_s("%d", &jogar_novamente);

        } while (jogar_novamente == 1);

        printf("Obrigado por jogar!\n");
        
        return 0;
}