#include <stdio.h>
#include <math.h>

    int main(){
        long numero;

        printf("Informe um número: ");
        scanf("%ld", &numero);

        printf("Número = %ld\nQuadrado = %ld\nCubo = %ld\n ", numero, numero * numero, numero * numero * numero);
    }