#include <stdio.h>
    int main(){
        int num, soma = 0;
            printf("Digite o numero: ");
            scanf("%i", &num);

                while(num!=0)
                {
                    if(num%2==0)
                    soma = soma + num;
                    printf("Digite o proximo: ");
                    scanf("%i", &num);
                }
    printf("A soma dos numeros pares digitados e: %i", soma);
    }