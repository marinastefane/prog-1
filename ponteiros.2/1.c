#include <stdio.h>
int main()
{
    int x, y, *ip, z[10];
    printf("digite o valor de X: ");
    scanf("%d", &x);
    printf("digite o valor de Y: ");
    scanf("%d", &y);
    printf("X e Y sao respectivamente: %d, %d", x, y);
    ip = &x;
    y = *ip;
    *ip = 0;
    // ip = &z[0];
    printf("\na posicao e: %p", &x);
    printf("\na posicao e: %p", &y);
    printf("\n%p", ip);
}
