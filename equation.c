// Bibliotecas
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa
int main ( int argc, char *argv[] )
{
    // Sistema
    setlocale(LC_ALL, "");
    system("color A & cls");

    // Variáveis
    float a, b, c;
    float r1, r2, delta;

    // Apresentação
    printf("\n ============================== \n");
    system("echo  - Usuário: %username%");
    system("echo  - Computador: %computername%");
    system("echo  - Hora: %time:~0,-3%");
    system("echo  - Data: %date:/=-%");
    printf(" ============================== \n");

    printf("\n - Digite A: ");
    scanf("%f", &a);

    if (a <= 0)
    {
        printf("\n - Equação Inválida !!!\n");
    }

    else
    {
        printf("\n - Digite B: ");
        scanf("%f", &b);

        printf("\n - Digite C: ");
        scanf("%f", &c);

        // Cálculo Delta
        delta = pow(b,2) - 4 * a * c;

        if (delta < 0)
        {
            printf("\n - Equação Inválida !!!\n");
        }

        else if (delta == 0)
        {
            // Cálculo
            r1= ( -b + sqrt(delta) ) / ( 2 * a );

            // Apresentação
            printf("\n - Existe Somente uma Raiz !!!\n");
            printf("\n - Raiz: %.2f", r1);
        }

        else
        {
            // Cálculos
            r1 = ( -b + sqrt(delta) ) / ( 2 * a );
            r2 = (  b + sqrt(delta) ) /( 2 * a );

            // Apresentação
            printf("\n - Existe 2 Raízes !!!\n");
            printf("\n - Raiz 1: %.2f", r1);
            printf("\n - Raiz 2: %.2f\n", r2);
        }
    }

    return (0);
}
