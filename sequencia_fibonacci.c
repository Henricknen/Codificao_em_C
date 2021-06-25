#include <stdio.h>

int main (void)
{
    int a = 1, b =2, n = 0;

    printf("Sequencia Fibonaccu:\n");

    printf("%d %d", a, b);

    for (int i = 3; i <= 20; i++)
    {
        n = a + b;
        a = b;
        b = n;
        printf("%d", n);
    }
}