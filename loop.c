#include <stdio.h>

int main (void)
{
    printf("Contagem crescente: ");
    for (int i = 1; i < 11; i++)
    {
        printf("%d", i);  // 1 2 3 4 5 6 7 8 9 10
    }

    printf("\nContagem regressiva: ");
    for (int i = 10; i >= 0; i--)
    {
        printf("%d", i);  //10 9 8 7 6 5 4 3 2 0
    }

    printf("\nContagem de 2 em 2: ");
    for (int i = 0; i < 20; i += 2)
    {
        printf("%d", i);  //0 2 4 6 8 10 12 14 16 18
    }
}