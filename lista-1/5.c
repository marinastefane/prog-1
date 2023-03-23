#include <stdio.h>

    int main(){
        float a, b, c, d;
        float media = 0, soma = 0;
        printf("Digite A:");
        scanf("%f",&a);
        printf("Digite B:");
        scanf("%f",&b);
        printf("Digite C:");
        scanf("%f",&c);
        printf("Digite D:");
        scanf("%f",&d);

            soma = a + b + c + d;
            media = soma/4;

            printf("a media dos numeros e: %.3f", media);
    }