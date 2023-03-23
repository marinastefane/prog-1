#include <stdio.h>

int main(){
    int salario, consumo;
    float valor, desconto, total;
        printf("Digite seu salario:");
        scanf("%d",&salario);
        printf("Digite seu consumo de agua mensal:");
        scanf("%d",&consumo);

        valor = consumo/1000 * 0.02 * salario;
        printf("o valor a ser pago e %.3f\n", valor);
        desconto = valor * 0.15;
        printf("o desconto e %.3f\n", desconto);
        total = valor - desconto;
        printf("o valor com desconto e %.3f", total);

}