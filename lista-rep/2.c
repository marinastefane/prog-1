#include <stdio.h>

int main(){
    float n, soma = 0, q;
    float media;
        printf("Escolha a quantidade de numeros:");
        scanf("%f", &q);
        printf("digite os numeros:\n");
            for (int i = 0; i <=q; i++)
            {
                printf("valor:");
                scanf("%f", &n);
        
                //soma
                soma = soma + n;
                //media
                media = soma/q;
            }
        printf("a soma dos numeros e: %.2f e a media dos numeros e: %.2f", soma, media);

}