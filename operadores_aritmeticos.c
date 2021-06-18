#include <stdio.h>
                                        //operadores aritmeticos
int main(void) {      
    
    int a = 5, b = 3, c = 0;
    
    c = a + b;                         // soma
    printf("a + b = %d\n", c);           
    
    c = a - b;                         // subtração
    printf("a - b = %d\n", c);         
    
    c = a * b;                         // multiplicação
    printf("a * b = %d\n", c);
    
    c = a / b;                        // divisão
    printf("a / b = %d\n", c);
    
    c = a % b;                       // resto da divisão
    printf("Resto da divisão entre a e b = %d\n", c);
    
    a++;                             // incremento 
    printf("a++ = %d\n", a);
    
    b--;                             // decremento
    printf("b-- = %d\n", b);
}