#include <stdio.h>
#include <math.h>

    int main(){
        long numero;

        printf("Infome um número: ");
        scanf("%ld", &numero);

        if(numero % 2 == 0){
            printf("O número é par ");
        } else {
            printf("O número é impar ");
        }
    }