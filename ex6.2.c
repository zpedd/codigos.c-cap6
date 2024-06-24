#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

float base;
float expoente;
float valor;

printf("Base: ");
scanf ("%f", &base);

printf("Expoente: ");
scanf("%f", &expoente);

valor = pow(base, expoente);
printf("%.2f ^ %.2f = %.2f\n", base, expoente, valor);


    return 0;
}