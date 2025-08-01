//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 21
#include <stdio.h>
int main(){
	int vetor[8];
	int i, pares = 0,  impares = 0;
	printf("Me informe 8 numeros inteiros:\n");
	
	for(i= 0 ; i < 8; i++)
	{
		printf("Numero %d:",i +1);
		scanf("%d",&vetor[i]);
		
		if(vetor[i] % 2 == 0 ){
			pares++;
			
		}else{
			impares++;
		}
		
		
	}
	printf("\n valores impares: %d",impares);
	printf("\n valores pares : %d", pares);

return 0;
	
}
