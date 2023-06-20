#include <stdio.h>
#include <stdlib.h>
int som(int v[], int t)
{
    if (t == 0)
    {
        return 0;
    }
    else
    {
        return v[t - 1] + som(v, t - 1);
    }
}
int main()
{
    int x;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &x);
    int v[x];
    for (int i; i < x; i++)
    {
        printf("\n digite o conteudo do vetor: ");
        scanf("%d", &v[i]);
    }
    int soma;
    soma = som(v, x);
    printf("\no somatorio e : %d", soma);
}
