#include <stdio.h>
int main()
{
    int n, i, par = 0, impar = 0, maiori = 0, maiorp = 0;
    printf("digite o valor de N:");
    scanf("%d", &n);
    i = 0;
    while (i <= n)
    {
        printf("digite n valores:");
        scanf("%d", &i);
        switch (i)
        {
        case i % 2 == 0:
            par++;
            if (i > maiorp)
            {
                maiorp = i;
            }
            break;
        default:
            impar++;
            if (i > maiori)
            {
                maiori = i;
            }
            break;
        }
        i++;
    }
    printf("a quantidade de numeros pares e %d\n", par);
    printf("a quantidade de numeros impares e %d\n", impar);
    printf("o maior numero par e %d\n", maiorp);
    printf("o maior numero impar e %d\n", maiori);
}
