//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 23
#include<stdio.h>
int main(){
	int matriz[3][3];
	int i, j;
	int soma = 0;
	printf("Voce vai me passar os valores que sera calculado nas matriz 3X3\n ");
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
		
			printf("Elemento [%d][%d]\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
			if (i==j){
				soma+= matriz[i][j];
			}	
			
		}
	}
	
	printf("\nSoma dos elementos da diagonal principal: %d\n",soma);
	
	return 0;
	
	
	
	
	
}
