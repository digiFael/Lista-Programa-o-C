//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 20
#include <stdio.h>

int main() {
    int A[5], B[5], C[5];
    int i;

    printf("Digite 5 numeros para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 numeros para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Soma os elementos correspondentes
    for (i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    // Exibe o vetor C
    printf("\nVetor C (soma de A e B):\n");
    for (i = 0; i < 5; i++) {
        printf("C[%d] = %d\n", i + 1, C[i]); // i+1 para mostrar posição a partir de 1
    }

    return 0;
}
