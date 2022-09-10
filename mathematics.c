#include <stdlib.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

int main( int argc, char *argv[] )
{

    char decisao = 'A';

    while( decisao != 'c' && decisao != 'C' )
    {
        int d = 0;
        int cont = 0;
        int qtd = 0;
        float s = 0;
        float g = 0;
        float f = 0;
        float sb = 0 ;

        system("color E");
        printf(" \n ===== PROGRAMA DAS 4 OPERACOES ===== \n\n\n");
        printf(" Qual das operacoes deseja realizar ? ");
        printf("\n \n");
        printf(" 1.SOMA \n");
        printf(" 2.SUBTRACAO \n");
        printf(" 3.MULTIPLICACAO \n");
        printf(" 4.DIVISAO \n\n Resp: ");

        // Entrada de dados da selecao das operacoes matematicas
        scanf("%d", &d );

        // Soma
        if( d == 1 )
        {
            printf("\n Deseja realizar a soma de quanto numeros ? ");
            scanf("%d", &qtd );

            for( cont = 0 ; cont < qtd ; cont ++ )
            {
                printf(" Digite o valor : ");
                scanf("%f", &f );
                s = s + f;
            }

            printf("\n\n A soma de %d numeros = %.2f \n", qtd, s );
        }

        // Subtracao
        if( d == 2 )
        {
            printf("\n A realizacao da subtracao sera com 2 numeros somente \n \n ");
            printf("\n Digite o valor do primeiro numero: ");
            scanf("%f", &f );

            printf("\n Digite o valor do segundo numero : ");
            scanf("%f", &g );

            s = f - g;

            printf("\n\n A subtracao = %.2f ", s );
        }

        // Multiplicacao
        if( d == 3 )
        {
            s = 1;

            printf(" Deseja realizar a multiplicacao de quantos numeros ? ");
            scanf("%d", &qtd );

            for( cont = 0 ; cont < qtd ; cont ++ )
            {
                printf("\n Digite o valor: ");
                scanf("%f", &f );

                s = s * f;
            }
            printf("\n\n A multiplicacao de %d numeros = %.2f \n", qtd, s );
        }

        // Divisao
        if( d == 4 )
        {
            printf("\n A realizacao da divisao sera com 2 numeros somente \n \n");

            printf("\n Digite o valor do primeiro numero: ");
            scanf("%f", &f );

            printf("\n Digite o valor do segundo numero: ");
            scanf("%f", &g );

            s = f / g;

            printf("\n\n A Divisao = %.2f \n", s );
        }

        printf("\n Deseja voltar ao menu principal ?\n <Aperte 'Enter' para continuar ou 'C' para sair>");
        decisao = getche();
        system("cls");
    }

        return 0;
}
