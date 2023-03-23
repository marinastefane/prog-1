#include <stdio.h>

    int main (){
        int a = 5, b = 3, aux = 0;
            aux = a;
            a = b;
            b = aux;

            printf("o novo valor de a = %i\no novo valor de b = %i", a, b);
    }