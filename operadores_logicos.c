#include <stdio.h>

int main (void)
{
    int A = 5, B = 5, C = 7, resultado = 0;

    printf("A = %d \nB = %d \nC = %d \n\n", A, B, C);

    resultado = (A == B) && (C > B);  //verdadeiro
    printf("(A == B) && (C > B) -> %d \n", resultado);

    resultado = (A == B) && (C < B);  //falso
    printf("(A == B) && (C < B) -> %d \n", resultado);

    resultado = (A == B) || (C < B);  //verdadeiro
    printf("(A == B) || (C < B) -> %d \n", resultado);

    resultado = (A != B) || (C < B);  //falso
    printf("(A != B) || (C < B) -> %d \n", resultado);

    resultado = !(A != B);  //verdadeiro
    printf("!(A != B) -> %d \n", resultado);

    resultado = !(A == B);  //falso
    printf("!(A == B) -> %d \n", resultado);
}