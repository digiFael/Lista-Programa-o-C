// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 17
#include <stdio.h>

int main() {
    int numero, maior ; 
	maio = 0; 
    
    printf("Digite uma serie de numeros inteiros positivos (-1 para encerrar):\n");
    
    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero > maior) {
            maior = numero;
        }
        
    } while (numero != -1);  
    
    printf(" O maior numero digitado foi: %d\n", maior);
    
    return 0;
}

