#include <stdio.h>

int main (void)
{
    char operador = 0;
    float n1 = 0, n2 = 0, resultado = 0;

    printf("Digite um operador (+, -, *, /): "); //recebe informações do usuario
    scanf("%c", &operador);
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (operador)  //realiza a respectiva operação e mostra o resultado
    {
    case '+':
        resultado = n1 + n2;
        printf("%f + %f = %f",n1, n2, resultado);
        break;

    case '-':
        resultado = n1 - n2;
        printf("%f - %f = %f",n1, n2, resultado);
        break;

    case '*':
        resultado = n1 * n2;
        printf("%f * %f = %f",n1, n2, resultado);
        break;

    case '/':
        resultado = n1 / n2;
        printf("%f / %f = %f",n1, n2, resultado);
        break;
    
    
    default:
        printf("Error! Operador incorreto...");
    }
}

