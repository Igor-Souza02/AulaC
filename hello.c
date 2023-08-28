#include <stdio.h>

    int main(){
        char nome[50];
        long idade;
        
        printf("Informe seu nome: ");
        scanf("%s", nome);
        printf("Informe sua idade: ");
        scanf("%ld", &idade);

        printf("Seu nome é %s e sua é idade %ld", nome, idade);
    }       
