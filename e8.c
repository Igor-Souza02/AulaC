#include <stdio.h>

int main (){
    long numero;

    printf("Informe um número: ");
    scanf("%ld", &numero);

    if(numero == 0){
        printf("Seu número é igual a zero\n");
    } else if(numero > 0 ){
        printf("Seu número é positivo!\n");
    } else {
        printf("Seu número é Negativo!\n");
    }
}