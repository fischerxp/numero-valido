#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa em C que leia um n�mero, o qual pode ser 1,2,3,4 ou
5, caso seja um dos cinco n�meros v�lidos apresentar uma mensagem
informando que o n�mero lido � v�lido. Caso o n�mero lido n�o seja
v�lido apresentar uma mensagem informando que o n�mero lido n�o �
v�lido.*/
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
