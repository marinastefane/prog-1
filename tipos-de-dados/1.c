#include <stdio.h>

    int main(){
        float a, b, c, d;
        float soma = 0, media;
            
                for (int i = 0; i < 4; i++)
                {
                    printf("Digite 4 notas: ");
                    scanf("%f", &a);
                        soma = soma + a;
                        media = soma/4;
                }
        
            printf("a soma e: %.2f\n", soma);
            printf("a media e: %.2f\n", media);
            printf("a soma sem decimais e: %.0f\n", soma);
            printf("a media sem deciamais e: %.0f\n", media);
    }
