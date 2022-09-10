/// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
/// Protótipos
 
// Entrada Dados
float dados();
 
// Tabuada
float tabuada(float n);
 
/// Programas
int main ( int argc, char* argv [] )
{
    // Sistema
    setlocale(LC_ALL, "");
 
    // Variável
    char decisao = 's';
 
    // Estrutura de Repetição
    while( decisao != 'n' && decisao != 'N')
    {
        // Relatório
        system("cls & color 1F");
        printf("\n ============================\n");
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Data: %date:/=-%");
        system("echo  - Hora: %time:~0,-3%");
        printf(" ============================\n\n\n\n");
 
        // Apresentação
        printf(" ------------------------------------");
        printf("\n               TABUADA               ");
        printf("\n ------------------------------------\n\n");
 
        // Chamada de Função
        dados();
 
        // Menu
        printf("\n\n Deseja Calcular novamente ?\n");
        printf("\n [s] - Sim \n [n] - Não \n");
        printf("\n- Opc: ");
        decisao = getche();
    }
}
 
//////////////////// Funções ////////////////////
 
/// Entrada Dados
float dados()
{
    float n;
 
    printf("\n- Insira o Número: ");
    scanf("%f", &n);
 
    // Chamada de Método
    tabuada(n);
 
    return(0);
}
 
/// Tabuada
float tabuada(float n)
{
    int i;
 
    printf("\n--------------------------------------");
    for( i = 0; i <= 100; i++ )
    {
        printf("\n %.2f x %d = %.2f", n, i, n * i );
    }
    printf("\n--------------------------------------");
 
    return(0);
}
