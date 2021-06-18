#include <stdio.h>
                               //operadores Bit-a-Bit(Bitwise)
int main(void){
unsigned char a = 0b00000101, b = 0b00001001;

printf("a & b = %d\n", a & b);  // and

printf("a | b = %d\n", a | b);  // or

printf("a ^ b = %d\n", a ^ b);  // xor

printf("~a = %d\n", a = ~a);    // not

printf("b << 1 = %d\n", b << 1); // deslocamento a esquerda

printf("b >> 1 = %d\n", b >>  1);// deslocamento a direita
}