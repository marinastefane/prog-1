#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 5
#define colunas 5

int main()
{
    int m[5][5];
    srand (time(0));
    
    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
           m[l][c]=rand()%101;
           printf("%d  ", m[l][c]);
        }
        printf("\n\n");
        
    }
}
