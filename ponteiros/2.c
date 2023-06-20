#include <stdio.h>
#include <stdlib.h>
int som(int *v, int t)
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
int main(int argc, int *argv[])
{
    int j;
    int v[argc - 1];
    for (int i = 0, j = 1; i < argc - 1; i++, j++)
    {
        v[i] = atoi(argv[j]);
    }
    int soma;
    soma = som(v, argc - 1);
    printf("\no somatorio e : %d", soma);
}
