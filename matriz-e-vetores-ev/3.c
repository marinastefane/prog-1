#include <stdio.h>

#define M 100

    int main(){
        //int m  = 100;
        int n, i, nota, soma = 0, somaa = 0;
        float media = 0, mediaa = 0;
        int notas[2][M];

        printf("digite a quantidade de notas de PC: ");
        scanf("%d", &n);

        

        for ( i = 0; i < n; i++)
        {
            do
            {
                printf("digite as notas de PC: ");
                scanf("%d", &notas[0][i]);
            } while (notas[0][i] < 0 || notas[0][i] > 100);
            //notas[0][i] = nota;
            soma = soma + notas[0][i];
        }
         for (i = 0; i < n; i++)
        {
            do
            {
                printf("digite as notas de Lab. PC: ");
                scanf("%d", &notas[1][i]);
            } while (notas[1][i] < 0 || notas[1][i] > 100);
            //notas[0][i] = nota;
            somaa = somaa + notas[1][i];
        }
        media = soma/n;
        mediaa = somaa/n;
        printf("a media de PC e %.2f\n", media);
        printf("a media de Lab. PC e %.2f\n", mediaa);
        
        for (i = 0; i < n; i++)
        {
            if (notas[0][i] >= media)
            {
                printf("%d ", notas[0][i]);
            }
        }

        printf("\n");

        for (i = 0; i < n; i++)
        {
            if (notas[1][i] >= mediaa)
            {
                printf("%d ", notas[1][i]);
            }
        }
        
        printf("\n");

        return 0;
    
    }