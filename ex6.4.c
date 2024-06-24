#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    float numero;
    float valorAbsoluto;

    printf("Numero: ");
    scanf("%f", &numero);

    valorAbsoluto = fabs(numero);

    printf("Valor absoluto: %.2f", valorAbsoluto);

    return 0;
}