#include <stdio.h>
void troca1(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}
void troca2(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 5;
    int b = 7;
    troca2(a, b);
    printf("a = %d, b = %d\n", a, b);
    int x = 5;
    int y = 7;
    troca1(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}
