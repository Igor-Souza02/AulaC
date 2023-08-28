#include <stdio.h>

    int main(){
        long ano;

        printf("Informe o ano: ");
        scanf("%ld", &ano);

        if(ano % 4 == 0){
            printf("Esse ano é bissexto!\n");
        } else {
            printf("Esse ano não é bissexto!\n");
        }
    }