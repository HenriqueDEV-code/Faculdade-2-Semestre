#include <stdio.h>

int main() {
    char questao1 = '0';
    char questao2 = '0';
    char questao3 = '0';
    int Correta = 0; // variavel auxiliar

    puts("\t- QUIZ -\n");
    do {
        puts("Questao 01\n");

        puts("(1) - Em C, qual e o resultado de x++ quando x e igual a 5?");
        printf("a) 5 \n");
        printf("b) 6 \n");
        printf("c) x e incrementado, mas o valor retornado e 5 \n");
        printf("d) x e incrementado e o valor retornado e 6 \n");
        printf("R: ");
        scanf_s(" %c", &questao1, 1);

        if (questao1 != 'a' && questao1 != 'b' && questao1 != 'c' && questao1 != 'd') {
            system("CLS");
            printf("\aEntrada invalida. Por favor, escolha 'a', 'b', 'c' ou 'd'.\n");
        }

    } while (questao1 != 'a' && questao1 != 'b' && questao1 != 'c' && questao1 != 'd');

    if (questao1 == 'b')
    {
        Correta++;
    }

    do {
        puts("Questao 02\n");

        puts("(2) - Qual e a saida do seguinte trecho de codigo em C?\n\n");
        printf("int arr[] = {1, 2, 3, 4};\n");
        printf("int *ptr = arr;\n");
        printf("ptr += 2;\n");
        printf("printf(\"%%d\\n\", *ptr);\n");
        printf("a) 1 \n");
        printf("b) 2 \n");
        printf("c) 3 \n");
        printf("d) 4 \n");
        printf("R: ");
        scanf_s(" %c", &questao2, 1);

        if (questao2 != 'a' && questao2 != 'b' && questao2 != 'c' && questao2 != 'd') {
            system("CLS");
            printf("\aEntrada invalida. Por favor, escolha 'a', 'b', 'c' ou 'd'.\n");
        }
    } while (questao2 != 'a' && questao2 != 'b' && questao2 != 'c' && questao2 != 'd');

    if (questao2 == 'c')
    {
        Correta++;
    }

    do {
        puts("Questao 03\n");

        puts("(3) - Qual e a saida do seguinte trecho de codigo em C?\n\n");
        printf("int x = 10;\n");
        printf("int y = x++;\n");
        printf("printf(\"%%d %%d\", x, y);\n");
        printf("a) 10 10 \n");
        printf("b) 11 10 \n");
        printf("c) 11 11 \n");
        printf("d) 10 11 \n");
        printf("R: ");
        scanf_s(" %c", &questao3, 1);

        if (questao3 != 'a' && questao3 != 'b' && questao3 != 'c' && questao3 != 'd') {
            system("CLS");
            printf("\aEntrada invalida. Por favor, escolha 'a', 'b', 'c' ou 'd'.\n");
        }
    } while (questao3 != 'a' && questao3 != 'b' && questao3 != 'c' && questao3 != 'd');

    if (questao3 == 'b')
    {
        Correta++;
    }

    if (Correta == 3)
    {
        printf("*Parabens voce acertou todas as %d: *", Correta);
    }
    else if (Correta == 2 || Correta == 1)
    {
        printf("*Parabens voce acertou apenas %d: *", Correta);
    }
    else {
        printf("\a*Ahhh que pena, voce errou tudo %d: *", Correta);
    }
    return 0;
}
