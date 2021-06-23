#include <stdio.h>

int main (void)
{
    int n1, n2, n3, maior = 0;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    printf("Digite o numero 2: ");
    scanf("%d", &n2);
    printf("Digite o numero 3: ");
    scanf("%d", &n3);

    if ((n1 > n2) && (n1 > n3))
    {
        maior = n1;
    }
    else if ((n2 > n1) && (n2 > n3))
    {
        maior = n2;
    }
    else if ((n3 > n1) && (n3>n2))
    {
        maior = n3;
    }
    printf("O maior numero é o: %d\n",maior);
}
