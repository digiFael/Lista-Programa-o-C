//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 8

#include <stdio.h>

int main() {
    int N, i;
    double A = 0.0;

    // Entrada do usu�rio
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N > 0) {
        A = N;  // Primeiro termo � N
        for (i = 1; i <= N; i++) {
            A += (double)(N - i) / (i + 1); // Demais termos
        }

        // Sa�da do resultado
        printf("O valor de A �: %.4f\n", A);
    } else {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
    }

    return 0;
}
