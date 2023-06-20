#include <stdio.h>

    int main ()
    {
        char a;      
            printf("digite um caracter: " );
            scanf("%c", &a );
            printf("%c: %d na tabela ascii\n", a, a);
            printf("%o: octal\n", a);
            printf("%x: hexadecimal\n", a);
    }
