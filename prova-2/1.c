#include <stdio.h>
#include <string.h>
#define m 50
char copia_sem_espaco(char string1[], char string2[])
{
    int i;
    int ma = strlen(string1);
    for (i = 0; i < ma; i++)
    {
        string2[i] = string1[i];
        string2[i] = tolower(string1[i]);
    }
    if (string2[i] == ' ')
    {
        i--;
    }
    printf("a string2:%s", string2);
}
int main()
{
    char string1[m], string2[m];
    printf("digite a string:", string1);
    gets(string1);
    copia_sem_espaco(string1, string2);
}
