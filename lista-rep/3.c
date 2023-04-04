#include <stdio.h>

    int main(){
        float a, b, soma = 0;
        printf("digite A:");
        scanf("%f", &a);
        printf("digite B:");
        scanf("%f", &b);

            for (int i = 0; i < b; i++)
            {
                soma = soma + a;
            }
            printf("o resultado da multiplicacao e: %.2f", soma);


    }