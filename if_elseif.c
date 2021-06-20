#include <stdio.h>

int main (void)
{
    int numero1 = 0, numero2 = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("Resutado: %d > %d", numero1, numero2);
    }
    else if (numero1 < numero2)
    {
        printf("Resultado: %d < %d", numero1, numero2);
    }
    else
    {
        printf("Resultado: %d = %d", numero1, numero2);
    }
}

