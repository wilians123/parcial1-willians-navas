#include <stdio.h>

int main()
{
    printf("\nTABLA DE MULTIPLICAR DE UN NUMERO \n\n");
    int i, numero;

    printf("  Ingrese el numero de la tabla:  ");
    scanf( "%d", &numero );
    printf("\n  La tabla de multiplicar del numero es", numero);
    for ( i = 1 ; i <= 10 ; i++ ) {
        printf("\n  %d * %d = %d", i, numero, i*numero);
    }
    return 0;
}