/// Bibliotecas
#include <stdio.h>
#include <stdlib.h>

/// Programa
int main ()
{
    // Variaveis
    int cont = 1;
    float nota, soma, media;

    // Apresentação
    printf("===========================\n");
    printf("     PROGRAMA DA MEDIA     \n");
    printf("===========================\n");

    while( nota != -1 )
    {
        printf("\n NOTA %d <Para sair digite [-1] >: ", cont);
        scanf("%f",&nota);

        // Estrutura de Decisao: Caso [-1]
        if ( nota == -1 )
        {
            break;
        }

        else
        {
            // Contador
            cont ++;

            // Cálculo
            soma = soma + nota;
            continue;
        }
    }

    // Cálculo da Média
    if ( cont != 1 )
    {
        media = soma / ( cont - 1 );
        printf("\n MEDIA: %.2f \n", media);
    }

    else
    {
        printf("\n CALCULO NAO REALIZADO \n");
    }

    return (0);
}
