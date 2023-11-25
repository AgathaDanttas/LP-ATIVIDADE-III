//Crie um software que leia 5 números inteiros e, em seguida, mostre na tela:
//A quantidade de números ímpares;
// A quantidade de números negativos;
// O maior e o menor número;
//média de números pares;
// A média de números inseridos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num [5],i,par = 0,imp = 0,numN = 0,maior=0,menor;
    float soma=0,somaP=0,mediaP,mediaT = 0;
    for ( i = 1; i <= 5; i++)
    {
       printf ("Informe o %d numero:",i) ;
       scanf ("%d",&num[i]);
       soma += num[i];
       (num [i] % 2) == 0 ? par++,somaP+= num[i] : imp++;
       (num [i] < 0) ? numN++ : 0;
       maior = (num [i] > maior) ? num[i] : maior;
       menor = (num [i] < menor) ? num[i] : menor;
    }
    system ("cls");
    printf ("**********************************************************************\n");
    printf ("*                                                    // RESULTADO // *\n");
    printf ("**********************************************************************\n");
    mediaT = soma/i;
    printf ("MAIOR NUMERO:%d\n",maior);
    printf ("MENOR NUMERO:%d\n",menor);
    printf ("MEDIA DOS NUMEROS INSERIDOS:%.1f\n",mediaT);
    
    imp > 0 ? printf ("QUANTIDADE DE NUMEROS IMPARES:%d\n",imp):printf ("NENHUM NUMERO IMPAR INSERIDO.\n");
    par > 0 ? mediaP = somaP/par,printf ("Media par:%.1f\n",mediaP):printf ("NENHUM NUMERO PAR FOI DIGITDO NAO E POSSIVEL FAZER A MEDIA.\n");
    numN > 0 ? printf ("QUANTIDADE DE NUMEROS NEGATIVOS:%d\n",numN):printf ("NENHUM NUMERO NEGTIVO FOI INSERIDO.\n");
    
    return 0;
}