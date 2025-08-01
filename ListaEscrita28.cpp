//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 28 
#include <stdio.h>

// Fun��o que verifica se um n�mero � primo
int ehPrimo(int n) {
    if (n <= 1) return 0; //utilizado  pois os numero 0 e 1 nao sao primos 

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // se for divis�vel por algum n�mero, n�o � primo
        }
    }

    return 1; // se n�o achou divisor, � primo
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

