#include <stdio.h>

int main (void)
{
    int numero = 1, soma = 0;

    printf("Digite o numero 0 para sair.\n");
    while (numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("Soma = %d", soma);
}