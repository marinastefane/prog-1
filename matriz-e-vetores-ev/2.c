#include <stdio.h>

#define M 100


    int main(){
        //int m  = 100;
        int n, i, nota, soma = 0, somaa = 0;
        float media = 0, mediaa = 0;
        int vetor[M], vetor1[M];

        printf("digite a quantidade de notas de PC: ");
        scanf("%d", &n);

        

        for ( i = 0; i < n; i++)
        {
            do
            {
                printf("digite as notas de PC: ");
                scanf("%d", &nota);
            } while (nota < 0 || nota > 100);
            vetor[i] = nota;
            soma = soma + vetor[i];
        }
         for (i = 0; i < n; i++)
        {
            do
            {
                printf("digite as notas de Lab. PC: ");
                scanf("%d", &nota);
            } while (nota < 0 || nota > 100);
            vetor1[i] = nota;
            somaa = somaa + vetor1[i];
        }
        media = soma/n;
        mediaa = somaa/n;
        printf("a media de PC e %.2f\n", media);
        printf("a media de Lab. PC e %.2f\n", mediaa);
        
        for (i = 0; i < n; i++)
        {
            if (vetor[i] >= media)
            {
                printf("%d ", vetor[i]);
            }
        }

        printf("\n");

        for (i = 0; i < n; i++)
        {
            if (vetor1[i] >= mediaa)
            {
                printf("%d ", vetor1[i]);
            }
        }
        
        printf("\n");

        return 0;
    
    }