#include <stdio.h>

    int main(){
        int notas;
        float nota, media = 0, mediaa = 0, soma = 0, somaa = 0;

        printf("digite a quantidade de notas de PC: ");
        scanf("%d", &notas);

        for (int i = 1; i <= notas; i++)
        {
            do
            {
                printf("digite as notas de PC: ");
                scanf("%f", &nota);
            } while (nota < 0 || nota > 100);
            soma = soma + nota;
        }
        for (int i = 1; i <= notas; i++)
        {
            do
            {
                printf("digite as notas de Lab. PC: ");
                scanf("%f", &nota);
            } while (nota < 0 || nota > 100);
            somaa = somaa + nota;
        }
        media = soma/notas;
        mediaa = somaa/notas;
        printf("a media de PC e %.2f\n", media);
        printf("a media de Lab. PC e %.2f\n", mediaa);
        
    
    }
