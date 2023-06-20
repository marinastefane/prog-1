#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define m 5
#define n 50

int main(){
    char ma [m][n];
    char ultimo[n];
    int i, maiortamanho = 0, mt = 0;

        for (i = 0; i < m; i++)
        {
            printf("Digite um nome: ");
            gets(ma[i]);
        }
        printf("\nNomes inseridos sao: \n");

        for (i = 0; i < m; i++)
        {
            printf("%s\n", ma[i]);

            int tamanho = strlen(ma[i]);
            if (tamanho > maiortamanho){
                maiortamanho = tamanho;
                mt = i;

            }
        }
        printf("\nMaior nome: %s", ma[mt]);
       
      
        strcpy(ultimo, ma[0]);
            for (i = 1; i < m; i++)
            {
                if (strcmp(ma[i], ultimo) > 0) {
                    strcpy(ultimo, ma[i]);
                }
            }
        printf("\no ultimo nome e: %s", ultimo);
        

}
