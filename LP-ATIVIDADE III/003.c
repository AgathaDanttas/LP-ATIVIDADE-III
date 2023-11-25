// Implemente um programa que permita cadastrar contatos telefônicos em uma agenda, utilizando vetores para armazenar os nomes e números de telefone. Permita que o usuário digite o código 1 para adicionar um número e 2 para mostrar os números cadastrados e encerrar o software.

#include <stdio.h>
#include <stdlib.h>

void cadastro(void) {
    printf("**************************************************************************\n");
    printf("*                                          CADASTRO ELETRONICO            *\n");
    printf("*                                                                         *\n");
    printf("**************************************************************************\n");
}

void agenda(void) {
    printf(" _____________________________________________________________________________  \n");
    printf("|                           //        //                                      | \n");
    printf("|                          // AGENDA //                                       | \n");
    printf("|_________________________//________//________________________________________| \n");
   
}
int main() {
    int cod, i, contador = 0;
    char nome[100][3000], numero[100][3000];

    cadastro();

    do {
        printf("1 - ADICIONAR NUMEROS A AGENDA.\n");
        printf("2 - MOSTRAR NUMEROS CADASTRADOS.\n");
        printf("Digite 1 ou 2:");
        scanf("%d", &cod);

        switch (cod) {
            case 1:
                if (contador < 9999999) {
                    agenda();
                    printf("Informe o nome:");
                    fflush(stdin);
                    fgets(nome[contador],3000,stdin);
                    printf("Informe o numero:");
                    fflush(stdin);
                    fgets(numero[contador],3000,stdin);
                    contador++;
                } else {
                    printf("Limite de contatos atingido.\n");
                }
                break;
            case 2:
                agenda();
                if (contador > 0) {
                    for (i = 0; i < contador; i++) {
                        printf("NOME:%s", nome[i]);
                        printf("NUMERO:%s", numero[i]);
                        printf ("\n");
                    }
                } else {
                    printf("NENHUM NUMERO CADASTRADO.\n");
                }
                break;
            default:
                if (cod != 1 && cod != 2) {
                    printf("Numero invalido...\n");
                }
                break;
        }
    } while (cod == 1);

    return 0;
}
