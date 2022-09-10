int main()
 {
     int a;
     int d;
     int i;
     int c;
     int b;
     int e;
 
     printf("\n ===== PROGRAMA DO NUMERO PRIMO ===== \n");
 
     printf(" Digite um numero por favor ? \n");
     scanf("%d", &a );
 
     if( a < 0 )
     {
         printf(" Numero %d: Invalido \n", a );
         exit(0);
     }
 
     else
     if( a == VALUE1 )
     {
         printf(" Numero %d: Divisor universal \n", VALUE1 );
         exit(0);
     }
 
     else
     if( a > 0 )
     {
         for( i = 1; i <= a ; i ++ )
         {
             d  = a % i;
 
             if ( d == 0 )
             {
                 c = c + 1;
             }
 
             if( c > 2 )
             {
                 system("cls");
                 system(" color C ");
                 printf("\n Numero %d nao primo \n", a );
                 break;
             }
         }
     }
 
     if( c == 2 )
     {
         system("cls");
         system(" color A ");
         printf(" \n Numero %d primo \n", a );
     }
 
     if( a != 1 && a != 0 )
     {
         printf(" Deseja saber os dividores do numero %d ? \n", a );
         printf(" 1. Sim \n 2. Nao \n");
         scanf("%d", &b );
 
         switch( b )
         {
             case 1:
             for( i = 1 ; i <= a; i ++ )
             {
                 e = a % i;
 
                 if( e == 0 )
                 {
                     printf(" O numero %d e divisivel por %d \n", a, i );
                 }
             }
             break;
 
             case 2:
                printf(" OK ");
                break;
 
             default:
                break;
         }
     }
     return (0);
 }
