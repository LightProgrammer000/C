/// Bibliotecas
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h> // Chama a Função Sleep
 
/// Funções
int JoKenPo();
int Computador_Joga();
char Menu( char cod );
void Analise( int jog_hum, int jog_maq );
 
/// Programa
int main ( int argc, char *argv [] )
{
    // Configurações Idioma
    setlocale(LC_ALL, "");
 
    // Variável Estratégica
    char cod = 'A';
 
    do
    {
        // Variáveis de Controle
        int a;
        int b;
 
        // Apresentação 1
        system("cls & color B");
        printf("\n ============================\n");
        system("echo  - Usuario: %username%");
        system("echo  - Computador: %computername%");
        system("echo  - Data: %date:/=-%");
        system("echo  - Hora: %time:~0,-3%");
        printf(" ============================\n\n\n");
 
        // Apresentação 2
        printf(" =============================== \n");
        printf("          JO - KEN - PO          \n");
        printf(" ================================\n");
 
        // Atribuindo Chamadas de Funções
        a = JoKenPo();
        b = Computador_Joga();
 
        // Chamada de Procedimento
        Analise(a, b);
 
        // Menu Interativo
        cod = Menu(cod);
 
    } while ( cod != 'n' && cod != 'N');
 
    return(0);
}
 
 
/////////////////////////////////// FUNÇÕES ///////////////////////////////////
 
// Menu
char Menu(char cod)
{
    // Entrada de Dados
    printf("\n\n * Deseja Jogar Novamente ?");
    printf("\n - [s] Sim");
    printf("\n - [n] Não");
    printf("\n\n - Opc.: ");
    cod = getche();
 
    // Retorno
    return(cod);
}
 
// JokePo
int JoKenPo()
{
    // Variável Local
    int jog_hum;
 
    // Entrada de Dados
    printf("\n Você Começa a Jogar: \n");
    printf(" - [1] Pedra \n");
    printf(" - [2] Papel \n");
    printf(" - [3] Tesoura \n");
    printf("\n - Opc.: ");
    scanf("%d", &jog_hum);
 
    // Retorno
    return(jog_hum);
}
 
int Computador_Joga()
{
    // Variável Local
    int jog_maq;
 
    // Sistema: Controle de Números Aleatórios
    srand( (unsigned) time(NULL) );
 
    // Mensagem
    printf("\n Agora é a Minha Vez... Pensado... \n");
    system("timeout /t 3 /nobreak");
 
    // Gerando Números Aleatórios
    jog_maq = ( rand() % 3 + 1 );
 
    // Retorno
    return(jog_maq);
}
 
// Análise
void Analise( int jog_hum, int jog_maq )
{
    // Sistema
    system("cls & color F");
 
    // Variáveis Locais
    int i;
    char men[] = "JoKenPo";
 
    // Estrutura de Repetição
    for ( i = 0; i < sizeof(men) - 1 ; i ++ )
    {
        printf("\n \t%c \t%c \t%c \t%c \t%c \t%c \t%c \n", men[i], men[i], men[i], men[i], men[i], men[i], men[i] );
        Sleep(700);
    }
 
    // Apresentação
    system("cls");
    printf(" =============================== \n");
    printf("          JO - KEN - PO          \n");
    printf(" ================================\n");
 
    // Empate
    if ( jog_hum == jog_maq )
    {
        system("color E");
        printf("\n * Situação: %s", "EMPATE !!!");
 
        switch (jog_hum)
        {
 
            case 1:
                printf("\n - Você: Pedra");
                printf("\n - Máquina: Pedra");
                break;
 
            case 2:
                printf("\n - Você: Papel");
                printf("\n - Máquina: Papel");
                break;
 
            case 3:
                printf("\n - Você: Tesoura");
                printf("\n - Máquina: Tesoura");
                break;
 
            default:
                printf("\n Você: Inválido");
                printf("\n Máquina: Inválido");
                break;
        }
    }
 
    // Caso Contrário
    else
    {
        ////////////// PEDRA //////////////
 
        // Humano: Pedra || Máquina: Papel
        if( jog_hum == 1 && jog_maq == 2 )
        {
            system("color C");
            printf("\n * Situação: %s", "PERDEU !!!");
            printf("\n - Você: Pedra");
            printf("\n - Máquina: Papel");
         }
 
        // Humano: Pedra || Máquina: Tesoura
        else if( jog_hum == 1 && jog_maq == 3 )
        {
            system("color A");
            printf("\n * Situação: %s", "VENCEU !!!");
            printf("\n - Você: Pedra");
            printf("\n - Máquina: Tesoura");
         }
 
        ////////////// PAPEL //////////////
 
        // Humano: Papel || Máquina: Pedra
        else if( jog_hum == 2 && jog_maq == 1 )
        {
            system("color A");
            printf("\n * Situação: %s", "VENCEU !!!");
            printf("\n - Você: Tesoura");
            printf("\n - Máquina: Papel");
         }
 
        // Humano: Papel || Máquina: Tesoura
        else if( jog_hum == 2 && jog_maq == 3 )
        {
            system("color C");
            printf("\n * Situação: %s", "PERDEU !!!");
            printf("\n - Você: Tesoura");
            printf("\n - Máquina: Pedra");
         }
 
        ////////////// TESOURA //////////////
 
        // Humano: Tesoura || Máquina: Pedra
        else if( jog_hum == 3 && jog_maq == 1 )
        {
            system("color C");
            printf("\n * Situação: %s", "PERDEU !!!");
            printf("\n - Você: Tesoura");
            printf("\n - Máquina: Pedra");
         }
 
        // Humano: Tesoura || Máquina: Papel
        else if( jog_hum == 3 && jog_maq == 2 )
        {
            system("color C");
            printf("\n * Situação: %s", "VENCEU !!!");
            printf("\n - Você: Tesoura");
            printf("\n - Máquina: Papel");
         }
    }
}
