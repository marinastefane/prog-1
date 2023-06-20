#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int troca (char m[100]){
    int tam; 

    tam = strlen(m);
    
    for (int i = 0; i < tam; i++)
    {
            m[i]-= 32;
    }
    
    return m[100];
}

int main(){
    char m[100];
    int tam;

    printf("Digite o conteudo: ");
    scanf("%s", m);

    
    troca(m);
    printf("o conteudo minusculo: %s", m);

}
