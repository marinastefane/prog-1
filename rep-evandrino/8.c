#include <stdio.h>

    int main ()
    {
        int l,n;
            printf("Digite L (1 <= L <= 20): ");
            scanf("%d",&l);
            printf("Digite N (1 <= N <= 20): ");
            scanf("%d",&n);
                if ((l>=1 && l<=20) && (n>=1 && n<=20))
                    for (int i = 1; i <= l; i++)
                    {
                        for (int j = 1; j <=n; j++)
            
                        printf("*");
                        printf("\n");  
                    }
                else
                    printf("L ou N invalido");
    }