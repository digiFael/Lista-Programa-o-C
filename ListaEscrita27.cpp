//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 27

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
