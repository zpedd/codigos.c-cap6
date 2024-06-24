#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

float numero;
int maiorint;
int menorint;

printf("Numero: ");
scanf("%f", &numero);

maiorint = ceil(numero);
menorint = floor(numero);

printf("Maior inteiro mais proximo: %.2f\n", (float)maiorint);
printf("Menor inteiro mais proximo: %.2f", (float)menorint);

    return 0;
}