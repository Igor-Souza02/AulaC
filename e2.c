    #include <stdio.h>

    int main(){
        float celcius;
        
        printf("Infome a Temperatura em Celcius: ");
        scanf("%f", &celcius);

        printf("%.2f ºC = %.2f ºF\n", celcius, celcius * 9/5 + 32);
    }