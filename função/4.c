#include <stdio.h>

void linha (int q, char p)
{
    for (int i = 1; i <=q; i++)
    {
        printf("%c", p);
    }
    printf("\n");
}

int main()
{
    int quant;
    char p;
    
    printf("digite o caracter desejado: ");
    scanf("%c", &p);
    printf("quantidade de caracteres: ");
    scanf("%d", &quant);

    linha(quant, p);

}
    
