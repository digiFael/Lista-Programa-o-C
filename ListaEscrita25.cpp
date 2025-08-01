//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO

//Atividade: Lista de Exercícios 2 - Exercício 25

#include <stdio.h>

int main() {
    int matriz[3][4];
    int i, j, X, contador = 0;

    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o numero que deseja contar na matriz: ");
    scanf("%d", &X);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] == X) {
                contador++;
            }
        }
    }

    printf("\nO numero %d aparece %d vezes na matriz.\n", X, contador);

    return 0;
}

