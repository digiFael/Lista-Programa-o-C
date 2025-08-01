//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO

//Atividade: Lista de Exercícios 2 - Exercício 26
#include <stdio.h>

// Função que calcula o fatorial de um número
int fatorial(int n) {
    int i, resultado = 1;

    for (i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

	// para caso o usuario coloque um numero negativo 
	
    if (N < 0) {
        printf("Numero invalido! O fatorial so existe para numeros nao negativos.\n");
        return 1; 
    }

    int fat = fatorial(N);
    printf("Fatorial de %d eh: %d\n", N, fat);

    return 0;
}

