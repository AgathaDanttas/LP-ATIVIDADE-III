// Crie um programa que faça o cadastro de 5 alunos em uma escola, armazenando seus dados como: nome, idade e  3 notas  para cada aluno. Ao final, mostre todos os dados dos alunos como: nome, idade, as notas e a média. Após calcular a média, verifique para cada aluno se este estará aprovado (média maior ou igual a 7,0), em recuperação (média menor que 7,0 e maior ou igual a 5,0) ou reprovado (média menor que 5,0) com base nestes critérios.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, i, idd[5];
    char nome[5][250];
    float nota[5][3], soma[3]={0}, media[5];

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome do %d aluno:", i + 1);
        gets(nome[i]);
        printf("Informe a idade do %d aluno:", i + 1);
        scanf("%d", &idd[i]);
        for (j = 0; j < 3; j++)
        {
            printf("Informe a %d nota do aluno:", j + 1);
            scanf("%f", &nota[i][j]);
            soma[i] += nota[i][j];
        }
        printf("\n");
        fflush(stdin);
        media[i] = soma[i] / j;
    }

    for (i = 0; i < 5; i++){ 

        printf("Nome do %d aluno:%s\n", i + 1, nome[i]);
        printf("Idade do %d aluno:%d\n", i + 1, idd[i]);
        for (j = 0; j < 3; j++)
        {
         printf("Notas do %d aluno:%.1f\n", j + 1, nota[i][j]);
        }
        printf("Media do %d aluno:%.1f\n", j + 1, media[i]);
        media [i] >= 7 ? printf ("O ALUNO ESTA APROVADO.."):(( media [i] >= 5)?printf("O ALUNO ESTA EM RECUPERACAO..."):printf ("O ALUNO ESTA REPROVADO.."));
        printf("\n");
        printf("\n");
    }

    return 0;
}
