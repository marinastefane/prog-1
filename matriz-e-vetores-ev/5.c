#include <stdio.h>

#define M 100

int mediae(int notas[][M], int n)
{
    int soma = 0;
    for (int i = 0; i < 2; i++)
    {
        for(int c = 0; c < n; c++)
        {
            soma = soma + notas[i][c];
        }
    }
        return soma / (n * 2);
}

    int main()
    {
        
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
            } while (notas[1][i] < 0 || notas[1][i] > 100);

        }

    int f = mediae(notas, n);
    printf("\na media das notas sao: %d",f);

    }