#include <stdio.h>

int main (void)
{
    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) // verifica se o nnumero é menor que 0 (negativo)

    {
        printf("Você digitou um numero negativo.\n");
    }

        printf(" O Este é o comando de decisão if!");
}