//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 8

#include <stdio.h>

int main() {
    int N, i;
    double A = 0.0;

    // Entrada do usuário
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N > 0) {
        A = N;  // Primeiro termo é N
        for (i = 1; i <= N; i++) {
            A += (double)(N - i) / (i + 1); // Demais termos
        }

        // Saída do resultado
        printf("O valor de A é: %.4f\n", A);
    } else {
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    return 0;
}
