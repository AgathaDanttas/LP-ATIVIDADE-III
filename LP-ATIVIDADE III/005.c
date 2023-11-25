// Desenvolva um programa que registre as vendas de uma loja, armazenando os valores em um vetor e apresentando o total de vendas ao final. Considere que cada venda precisa do nome de um produto, seu preço e sua quantidade. Crie um menu onde o usuário possa digitar o número 1 para adicionar uma venda e o número 2 para sair do menu e exibir o total das vendas realizadas.
#include<stdio.h>
#include<stdlib.h>

void registro(void) {
    printf("***************************************************************************\n");
    printf("*                                                // REGISTRO DE VENDAS // *\n");
    printf("***************************************************************************\n");
}

int main() {
    int cod, contador = 0, quant[100];
    char nome[100][3000];
    float preco[100];

    registro();

    do {
        printf(" ____________________________________________\n");
        printf("|                      REGISTRO DE VENDAS    |\n");
        printf("|                                            |\n");
        printf("|1 - Adicionar uma venda                     |\n");
        printf("|2 - Exibir total de vendas realizadas       |\n");
        printf("|____________________________________________|\n");
        printf("Insira 1 ou 2: ");
        scanf("%d", &cod);

        switch (cod) {
            case 1:
                if (contador < 100) {
                    contador++;
                    printf("Informe o nome do produto: ");
                    fflush(stdin);
                    fgets(nome[contador], 3000, stdin);

                    printf("Informe a quantidade do produto: ");
                    scanf("%d", &quant[contador]);

                    printf("Informe o preço do produto: ");
                    scanf("%f", &preco[contador]);
                } else {
                    printf("Limite de vendas atingido.\n");
                }
                break;
            case 2:
                if (contador > 0) {
                    float totalVendas = 0.0;

                    for (int i = 1; i <= contador; i++) {
                        printf("PRODUTO: %s", nome[i]);
                        printf("QUANTIDADE DO PRODUTO: %d\n", quant[i]);
                        printf("VALOR: %.2f\n", preco[i]);

                        totalVendas += quant[i] * preco[i];
                    }

                    printf("TOTAL DE VENDAS: %.2f\n", totalVendas);
                } else {
                    printf("NENHUMA VENDA REALIZADA.\n");
                }
                break;
            default:
                if (cod != 1 && cod != 2) {
                    printf("Numero invalido. Tente novamente.\n");
                }
                break;
        }
    } while (cod == 1);

    return 0;
}
