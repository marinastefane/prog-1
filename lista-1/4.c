#include <stdio.h>

    int main(){
        int v = 80, t = 35;
        float q = 0, l = 0;

            q = (t * v) / 60;
            printf("quilometros = %.3f", q);

            l = q / 12;
            printf("\nlitro de gasolina = %.3f", l);
    }