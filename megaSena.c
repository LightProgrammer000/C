/// Bibliotecas
#include <math.h>
#include <time.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/// Protótipos
char Menu(char cod);
int Gerar_Numeros(int qtd_cartela);

/// Programa
int main()
{
    // Sistema
    setlocale(LC_ALL, "");

    char cod = 's';
    int qtd_cartela;

    do
    {
        while( cod != 'n' || cod != 'n' )
        {
            // Relatório
            system("cls & color E");
            printf("\n ============================\n");
            system("echo  - Usuario: %username%");
            system("echo  - Computador: %computername%");
            system("echo  - Data: %date:/=-%");
            system("echo  - Hora: %time:~0,-3%");
            printf(" ============================\n\n\n");

            printf(" ==========================\n");
            printf("     JOGO DA MEGA SENA     \n");
            printf(" ==========================\n");

            // Entrada de Dados
            printf("\n * Quantos Cartelas de Jogos Deseja Gerar ?");
            printf("\n - Opc: ");
            scanf("%d", &qtd_cartela );

            // Chamada de Função
            Gerar_Numeros(qtd_cartela);

            //int Gerando_Cartelas(qtd_cartela);
            cod = Menu(cod);
        }

    } while ( qtd_cartela < 0 );

    return(0);
}

//////////////////// FUNÇÕES ////////////////////

// Menu Interativo
char Menu(char cod)
{
    system("cls & color C");

    printf("\n - Deseja Continuar ? ");
    printf("\n [s] - Sim");
    printf("\n [n] - Nao");
    printf("\n\n - Opc: ");

    // Atribuição
    cod = getche();

    return(cod);
}

int Gerar_Numeros(int qtd_cartela)
{
    // Variáveis
    int a, b;
    int aleatorios;

    // Controlador de Numeros Aleatórios
    srand( (unsigned) time(NULL) );

    for( a = 1 ; a <= qtd_cartela ; a ++ )
    {
        system("cls & color B");
        printf("\n =================\n");
        printf("     CARTELA %d     \n", a );
        printf(" =================\n\n");

        // Estrutura de Repetição
        for( b = 1 ; b <= 6 ; b ++ )
        {
             // Comandos: Geracao de Numeros de 1 a 60
            aleatorios = rand();
            aleatorios = ( aleatorios % 60 ) + 1;

            printf(" - Número [%d] : %d \n", b , aleatorios );
        }

        printf("\n\n");
        system("pause");
    }

    return(0);
}
