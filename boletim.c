/// Bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
/// Programa
int main ( int argc, char *argv [] )
{
    // Variáveis
    int i, j;
    float nota[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };// Vetor (lista)
    float boletim[7][9] = { { 1, 7, 3, 2, 4, 2, 5, 6, 5 },
                            { 2, 8, 7, 3, 5, 4, 3, 8, 4 },
                            { 3, 9, 3, 4, 3, 6, 2, 5, 2 },
                            { 4, 1, 5, 5, 5, 5, 1, 3, 6 },
                            { 5, 2, 4, 4, 2, 6, 7, 8, 8 },
                            { 6, 6, 3, 7, 2, 7, 8, 2, 5 },
                            { 7, 8, 2, 8, 1, 8, 9, 1, 3 }
                          };// 7 -> Linha | 9 -> Coluna
 
    // Configurações Idioma
    setlocale(LC_ALL, "Portuguese");
 
    //////////////// Vetores ////////////////
    putchar('\n');
    printf("\n - Nota[%d]: %.0f", 1 , nota[0] );
    printf("\n - Nota[%d]: %.0f", 1 , nota[1] );
    printf("\n - Nota[%d]: %.0f", 2 , nota[2] );
    printf("\n - Nota[%d]: %.0f", 3 , nota[3] );
    printf("\n - Nota[%d]: %.0f", 4 , nota[4] );
    printf("\n - Nota[%d]: %.0f", 5 , nota[5] );
    printf("\n - Nota[%d]: %.0f", 6 , nota[6] );
    printf("\n - Nota[%d]: %.0f", 7 , nota[7] );
    printf("\n - Nota[%d]: %.0f", 8 , nota[8] );
    printf("\n - Nota[%d]: %.0f", 9 , nota[9] );
    putchar('\n');
 
    // Estrutura de Repetição
    for( i = 0; i < 10 ; i ++ )
    {
        printf("\n - Nota[%d]: %.0f", i, nota[i]);
    }
    putchar('\n');
 
    //////////// Array MultiDimensional ////////////
    putchar('\n');
    printf("\n - Boletim [%d][%d]: %.0f", 0, 0, boletim[0][0] );
    printf("\n - Boletim [%d][%d]: %.0f", 1, 1, boletim[1][1] );
    printf("\n - Boletim [%d][%d]: %.0f", 2, 2, boletim[2][2] );
    printf("\n - Boletim [%d][%d]: %.0f", 3, 3, boletim[3][3] );
    printf("\n - Boletim [%d][%d]: %.0f", 4, 4, boletim[4][4] );
    printf("\n - Boletim [%d][%d]: %.0f", 5, 5, boletim[5][5] );
    printf("\n - Boletim [%d][%d]: %.0f", 6, 6, boletim[6][6] );
    putchar('\n');
 
    // Estrutura de Repetição: Matriz
    for( i = 0; i < 7 ; i ++ )
    {
        for ( j = 0; j < 9; j ++ )
        {
            printf("\n - Nota[%d][%d]: %.0f", (i+1), (j+1) , boletim[i][j] );
        }
    }
 
    return(0);
}
