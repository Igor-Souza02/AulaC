#include <stdio.h>

    int main(){
        float nota;

        printf("Infome a nota do aluno: ");
        scanf("%f", &nota);

        if(nota >= 6){
            printf("O aluno foi aprovado!\n");
        } else {
            printf("O aluno não foi aprovado!\n");
        }
    }