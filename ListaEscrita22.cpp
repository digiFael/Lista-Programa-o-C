//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 22
#include <stdio.h>

int main() {
    int N, i, X, encontrado = 0, posicao = -1;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &N);

    int vetor[N];

    printf("Digite %d numeros inteiros:\n", N);
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o numero que deseja procurar: ");
    scanf("%d", &X);

    for (i = 0; i < N; i++) {
        if (vetor[i] == X) {
            posicao = i;
            encontrado = 1;
            break; // Para ao encontrar a primeira ocorr�ncia
        }
    }

    if (encontrado) {
        printf("\nO numero %d foi encontrado na posicao %d.\n", X, posicao + 1); // +1 se quiser come�ar a contar da posi��o 1
    } else {
        printf("\nO numero %d nao foi encontrado no vetor.\n", X);
    }

    return 0;
}

