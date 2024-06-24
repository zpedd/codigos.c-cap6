#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    float numero;
    float raizQuadrada;
    float quadradoDe;

    printf("Numero: ");
    scanf("%f", &numero);

    raizQuadrada = sqrt(numero);
    quadradoDe = pow(numero, 2);

    if(numero > 0){
        printf("Raiz quadrada de %.2f: %.2f", numero, raizQuadrada);
    } else {
        printf("Quadrado de %.2f: %.2f", numero, quadradoDe);
    }
    
    return 0;
}