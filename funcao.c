#include <stdio.h>

    // os prototipoos das funções deve ser criados na inicialização dp programa
    int addNumeros (int a, int b);
    void fim (void); 
    
    // função principal (exemplo - ultilizando funções)
    int main (void){
        int n1 = 7, n2 = 3, soma = 0;
        
        printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &n1, &n2);
        
    // chama a função e guarda o retorno na variavel soma
        soma = addNumeros(n1, n2);
        printf("soma = %d", soma);
        
        fim(); // chama a função de parametros sem retorno
    }
    
    // função que adiciona dois numeros inteiros
    int addNumeros (int a, int b){
        int resultado;
        resultado = a + b;
        return resultado;
    }
    // função que mostra uma menssagem de fim do program
    void fim (void){
        printf("\n FIM DO PROGRAMA \n");
    }