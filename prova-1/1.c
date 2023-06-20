#include <stdio.h>

int main()
{
    int n, par = 0, impar = 0, maiori = 0, maiorp = 0;
    printf("digite o valor de N:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("digite n valores:");
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            par = par + 1;
            if (i > maiorp)
            {
                maiorp = i;
            }
        }
        else
            impar = impar + 1;
        if (i > maiori)
        {
            maiori = i;
        }
    }
    printf("a quantidade de numeros pares e %d\n", par);
    printf("a quantidade de numeros impares e %d\n", impar);
    printf("o maior numero par e %d\n", maiorp);
    printf("o maior numero impar e %d\n", maiori);
}
