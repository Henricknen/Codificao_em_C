#include <stdio.h>

int main (void)
{
    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("O numero %d é par.", numero);
    }
    else
    {
        printf("O numero %d é impar.", numero);
    }
}