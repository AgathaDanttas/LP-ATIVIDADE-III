#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nome[5][250];
    int idd[5];
    float peso[5], altura[5];
    int maiorA = 0, menorA = 0, maiorP = 0, menorP = 0, maiorI = 0, menorI = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome da %d pessoa:", i + 1);
        gets(nome[i]);
        printf("Informe a idade da %s:", nome[i]);
        scanf("%d", &idd[i]);
        printf("Informe a altura da %s:", nome[i]);
        scanf("%f", &altura[i]);
        printf("Informe o peso da %s:", nome[i]);
        scanf("%f", &peso[i]);
        fflush (stdin);
        printf("\n");

        maiorA = (altura[i] > altura[maiorA]) ? i : maiorA;
        menorA = (altura[i] < altura[menorA]) ? i : menorA;

        maiorP = (peso[i] > peso[maiorP]) ? i : maiorP;
        menorP = (peso[i] < peso[menorP]) ? i : menorP;

        maiorI = (idd[i] > idd[maiorI]) ? i : maiorI;
        menorI = (idd[i] < idd[menorI]) ? i : menorI;
    }
    
    printf("Pessoa com Maior Altura: %s, Altura: %.2f\n", nome[maiorA], altura[maiorA]);
    printf("Pessoa com Menor Altura: %s, Altura: %.2f\n", nome[menorA], altura[menorA]);
    printf("\n");
    printf("Pessoa com Maior Peso: %s, Peso: %.2f\n", nome[maiorP], peso[maiorP]);
    printf("Pessoa com Menor Peso: %s, Peso: %.2f\n", nome[menorP], peso[menorP]);
    printf("\n");
    printf("Pessoa com Maior Idade: %s, Idade: %d\n", nome[maiorI], idd[maiorI]);
    printf("Pessoa com Menor Idade: %s, Idade: %d\n", nome[menorI], idd[menorI]);
    return 0;
}