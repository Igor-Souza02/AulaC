#include <stdio.h>

    int main(){
        long numero, contador, fatorial = 1;

        printf("Informe um número: ");
        scanf("%ld", &numero);

        contador = numero;

        while(contador >= 1 ){
            fatorial *= contador;
            contador--;
        }

        printf("O fatorial de %ld = %ld\n", numero, fatorial);
    }