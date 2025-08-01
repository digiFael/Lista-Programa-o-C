//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 28 
#include <stdio.h>

// Função que verifica se um número é primo
int ehPrimo(int n) {
    if (n <= 1) return 0; //utilizado  pois os numero 0 e 1 nao sao primos 

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // se for divisível por algum número, não é primo
        }
    }

    return 1; // se não achou divisor, é primo
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}

