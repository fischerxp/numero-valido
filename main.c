#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que leia um número, o qual pode ser 1,2,3,4 ou
5, caso seja um dos cinco números válidos apresentar uma mensagem
informando que o número lido é válido. Caso o número lido não seja
válido apresentar uma mensagem informando que o número lido não é
válido.*/
/*desenvolvedor: fischerxp*/

int main()
{
    char numero;
    printf ("insira um numero:");
    scanf ("%c", &numero);
    switch (numero)
        {
            case '5': printf ( "numero valido" ); break;
            case '4': printf ( "numero valido" ); break;
            case '3': printf ( "numero valido" ); break;
            case '2': printf ( "numero valido" ); break;
            case '1': printf ( "numero valido" ); break;
            default: printf ( "numero invalido" );
        }
    return 0;
}
