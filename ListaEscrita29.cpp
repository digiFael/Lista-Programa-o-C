//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 29
#include <stdio.h>

// Função para converter Celsius para Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsiusParaFahrenheit(celsius);

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}


