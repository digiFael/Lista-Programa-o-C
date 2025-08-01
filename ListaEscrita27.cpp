//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 27

#include <stdio.h>


int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x, y;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &x, &y);

    int resultado = maior(x, y);

    printf("O maior numero eh: %d\n", resultado);

    return 0;
}
