        // Bibblioteca
#include <stdio.h>
        // Função principal
int main(void)
{
        // declaração de variaveis
        int num1 = 0;
        float num2 = 0;                                                      //printf e scanf 
        
        // usando o scanf e o printf
        printf("Digite um numero: ");   // mostra um texto
        scanf("%d", &num1);         // guarda o valor digitado na variavel
        printf("O numero int é = %d\n", num1);   // mostar o valor da variavel
    
        printf("Digite um numero: ");
        scanf("%f", &num2);
        printf("Ja o numero float é = %f\n", num2);
        
        // \n serve para pular uma linha
}
    