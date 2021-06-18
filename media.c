#include <stdio.h>

int main(void)
{
    int s, m = 0;
    //int m = 0;
    float num1, num2 = 0;
    //float num2 = 0;

    printf("Digite o 1 numero para o caluclo da media: ");
    scanf("%f", &num1);

    printf("Digite o 2 numero para o calculo: ");
    scanf("%f", &num2);

    s = num1 + num2;
    m = s / 2;
    printf("A media do num1 com num2 e = %d\n", m);
}