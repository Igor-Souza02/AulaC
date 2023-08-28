#include <stdio.h>

    int main(){
        float base, altura;
        

        printf("Informe o valor da base: ");
        scanf("%f", &base);
        printf("Informe o valor da altura: ");
        scanf("%f", &altura);
        
        float area = (base * altura) / 2;
        
        printf("A área do triângulo = %f\n", area);
        

    }