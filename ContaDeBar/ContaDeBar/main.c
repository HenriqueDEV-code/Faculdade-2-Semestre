#include <stdio.h>
int main() {
    int ValorGarcon = 10;
    float conta;
    int opcao;
    int total_pessoas = 0;
    float total_custos = 0.0;
    float custo_por_pessoa;

    do {
        // Apresenta o menu
        printf("\n--- Menu Gerenciar Conta de Bar ---\n");
        printf("1. Adicionar mais pessoas\n");
        printf("2. Adicionar mais custos\n");
        printf("3. Consultar o total de custo da Mesa\n");
        printf("4. Dividir a conta\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf_s("%d", &opcao);

        switch (opcao) {
        case 1:
            // Adicionar mais pessoas
            system("CLS");
            printf("Quantas pessoas deseja adicionar? ");
            int pessoas;
            scanf_s("%d", &pessoas);
            total_pessoas += pessoas;
            printf("Total de pessoas: %d\n", total_pessoas);
            break;

        case 2:
            // Adicionar mais custos
            system("CLS");
            printf("Qual o valor do custo adicional? ");
            float custo;
            scanf_s("%f", &custo);
            total_custos += custo;
            printf("Total de custos: R$ %.2f\n", total_custos);
            break;

        case 3:
            system("CLS");
            conta = (total_custos * ValorGarcon) / 100;
            printf("Total e: %.2f", conta + total_custos);
            break;

        case 4:
            system("CLS");
            // Dividir a conta
            if (total_pessoas > 0) {
                conta = (total_custos * ValorGarcon) / 100;
                printf("|O valor total consumo: R$ %.2f|", total_custos);
                printf("\n|Os 10%% do Garcon: %.2f|", conta);
                printf("\n|Total da nota: %.2f|", total_custos + conta);
                printf("\n|==========================================|\n");
                custo_por_pessoa = (total_custos + conta) / total_pessoas;
                printf("|Cada pessoa deve pagar: R$ %.2f\n", custo_por_pessoa);
                printf("\n|==========================================|\n");
                break;
            }
            else {
                system("CLS");
                printf("Nao ha pessoas para dividir a conta.\n");
            }
            break;
        case 5:
            printf("Encerrando o Programa...");
            break;

        default:
            system("CLS");
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}
