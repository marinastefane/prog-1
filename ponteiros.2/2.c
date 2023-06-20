#include <stdio.h>
#include <stdlib.h>
#define LIMITE 100
int main()
{
    const int max = 10;
    int a[max];
    int i;
    int *ptr = a;
    for (i = 0; i < max; i++)
        a[i] = rand() % LIMITE;
    for (i = 0; i < max; i++)
        printf("[%d] = %d no endereco %x\n", i, a[i], (a + i));
    for (i = 0; i < max; i++)
        printf("%d \n", *(ptr + i));
}
