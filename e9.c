#include <stdio.h>

int main (){
    long numero;

    printf("Informe o número: ");
    scanf("%ld", &numero);

    for(long contador = 1; contador <= 10; contador++){
        printf("%ld x %ld = %ld\n", numero, contador, numero * contador);
    }
}
