#include <stdio.h>

#define M 100

int mediae(int notas[], int n)
{
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma = soma + notas[i];
    }
        return soma / n;
}

    int main(){
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
           
        }
         for (i = 0; i < n; i++)
        {
            do
            {
            printf("digite as notas de Lab. PC: ");
            scanf("%d", &notas[1][i]);
            } while (notas[1][i] < 0  || notas[1][i] > 100);
            
        }

    int f = mediae(notas[0], n);
    printf("\na media das notas sao: %d",f);
    int g = mediae(notas[1], n);
    printf("\na media das notas de Lab sao: %d",g);

    }
