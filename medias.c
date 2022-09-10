/// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/// Prototipacao [Funcoes]
int Menu(int i);
float Media_Harmonica();
float Media_Geometrica();
float Media_Aritmetica();
float Media_Ponderada();

/// Programa
int main( int argc, char * argv [] )
{
    // Configuracoes [Idioma]
    setlocale(LC_ALL, "Portuguese");

    // Variavel [Controle]
    int esc;
    int i = 1;

    // Estrutura de Repeticao
    while ( i == 1 )
    {
        system("cls & color A");
        printf("\n -------- MEDIAS --------");
        printf("\n [1] - Media Harmonica");
        printf("\n [2] - Media Geométrica");
        printf("\n [3] - Media Aritmética");
        printf("\n [4] - Media Ponderada");
        printf("\n ------------------------\n");
        printf("\n- Opc: ");
        scanf("%d", &esc);

        /// Estrutura de Decisao
        if ( esc == 1 )
        {
            Media_Harmonica();
        }

        else if ( esc == 2 )
        {
            Media_Geometrica();
        }

        else if ( esc == 3 )
        {
            Media_Aritmetica();
        }

        else if ( esc == 4 )
        {
            Media_Ponderada();
        }

        else
        {
            system("cls");
            printf("\n\n --- Invalido --- \n\n");
        }

        i = Menu(i);
    }

    return(0);
}

/////////////////////////// FUNCOES ///////////////////////////

/// Menu Interativo
int Menu( int i )
{
    // Apresentacao
    system("pause & cls & color C");
    printf("\n- Deseja Voltar ?\n");
    printf("\n [1] Sim \n [2] Não");
    printf("\n\n - Opc: ");
    scanf("%d", &i);

    // Entrada de Dados
    switch (i)
    {
        case 1:
            i = 1;
            return(i);
            break;

        case 2:
            i = 2;
            return(i);
            break;

        default:
            break;
    }
    return(0);
}

/// Média Harmônica
float Media_Harmonica()
{
    // Variaveis
    int j, qtd;
    float soma = 0;
    float med_har, k;

    // Apresentacao
    system("cls & color E");
    printf("\n ----- Média Harmônica -----\n");

    // Entrada de Dados
    printf("\n- Informe a Quantidade de numeros: ");
    scanf("%d", &qtd);

    // Estrutura de Repeticao
    for( j = 1; j <= qtd; j ++ )
    {
        printf("\n- Informe [%d]º: ", j);
        scanf("%f", &k);

        // Variavel [Incrementavel]
        soma += 1/k;
    }

    // Calculo
    med_har = 1/soma;

    // Apresentação
    printf("\n\n ====== Resultado ====== \n");
    printf("\n- Média Harmônica: %.2f\n", med_har );
    printf("\n ======================= \n\n");

    return(0);
}

/// Média Geométrica
float Media_Geometrica()
{
    // Variaveis
    int j, qtd;
    float med_geo, k;
    float mult = 1;

    // Apresentacao
    system("cls & color E");
    printf("\n ----- Média Geométrica -----\n");

    printf("\nInforme a Quantidade de numeros: ");
    scanf("%d", &qtd);

    // Estrutura de Repeticao
    for( j = 1; j <= qtd; j ++ )
    {
        printf("\n- Informe [%d]º: ", j);
        scanf("%f", &k);

        // Variavel [Incrementavel]
        mult *= k;
    }

    // Cálculo
    med_geo = pow( mult, pow( qtd, -1 ) );

    // Apresentação
    printf("\n\n ====== Resultado ====== \n");
    printf("\n- Média Geométrica: %.2f\n", med_geo );
    printf("\n ======================= \n\n");

    return(0);
}

/// Média Aritmética
float Media_Aritmetica()
{
    // Variáveis
    int j, qtd;
    float soma = 0;
    float med_art, k;

    // Apresentação
    system("cls & color E");
    printf("\n ----- Média Aritmética -----\n");

    printf("\nInforme a Quantidade de numeros: ");
    scanf("%d", &qtd);

    // Estrutura de Repetição
    for( j = 1; j <= qtd; j ++ )
    {
        printf("\n- Informe [%d]º: ", j);
        scanf("%f", &k);

        soma += k;
    }

    // Cálculo
    med_art = soma / qtd;

    // Apresentação
    printf("\n\n ====== Resultado ====== \n");
    printf("\n- Média Aritmética: %.2f\n", med_art );
    printf("\n ======================= \n\n");

    return(0);
}

/// Média Ponderada
float Media_Ponderada()
{
    // Variáveis
    int j, qtd;
    float med_pond, k, l;
    float soma = 0;
    float peso_soma = 0;

    // Entrada de Dados
    system("cls & color E");
    printf("\n ----- Média Aritmética -----\n");

    printf("\nInforme a Quantidade de numeros: ");
    scanf("%d", &qtd);

    // Estrutura de Repetição
    for( j = 1; j <= qtd; j ++ )
    {
        printf("\n- Informe [%d]º: ", j);
        scanf("%f", &k);

        printf("\n- Informe o Peso: ");
        scanf("%f", &l);

        soma += k*l;
        peso_soma += l;
    }

    // Proteção: Divisão por 0
    if( peso_soma == 0 )
    {
        printf("Conta Invalida");
    }

    else
    {
        // Cálculo
        med_pond = soma/peso_soma;

        // Apresentação
        printf("\n\n ====== Resultado ====== \n");
        printf("\n- Média Ponderada: %.2f\n", med_pond );
        printf("\n ======================= \n\n");
    }

    return(0);
}
