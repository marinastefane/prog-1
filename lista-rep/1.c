#include <stdio.h>

int main(){
    float n, soma = 0;
    float media;
        printf("digite 10 numeros:\n");
            for (int i = 0; i <=9; i++)
            {
                printf("valor:");
                scanf("%f", &n);
        
                //soma
                soma = soma + n;
                //media
                media = soma/10;
            }
        printf("a soma dos numeros e: %.2f e a media dos numeros e: %.2f", soma, media);

}
