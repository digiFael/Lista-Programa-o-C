//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 18
#include<stdio.h>
int main(){
	int numero;
	int i;
	
	printf("Me informe a quantidades de numero que voce quer armazenar\n");
	scanf("%d",&numero);
	int vetor[numero];
	for (i = 0; i < numero;i++){
		printf("Digite um numero\n");
		scanf("%d",&vetor[i]);
		
	}
	 printf("Numeros na ordem inversa:\n");
	 for(int i= numero - 1; i >= 0; i--){
	 	printf("%d",vetor[i]);
	 	
	 }
	
	
	
return 0;
	
}
