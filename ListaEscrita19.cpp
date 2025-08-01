//ATIVIDADE AVALIATIVA - LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Atividade: Lista de Exercícios 2 - Exercício 19
#include<stdio.h>
int main(){
	int i ;
	int numero,maior,menor;
	int  vetor [10];
	int pos_maior, pos_menor;

	
	printf ("Digite 10 valores:\n");
	
	for(i=0;i < 10; i++){
		scanf("%d",&vetor[i]);
		
		if(i==0){
			maior= vetor[i];
			menor = vetor[i];
			pos_maior = i;
            pos_menor = i;
		}else {
			if(vetor[i]> maior){
				maior = vetor[i];
				pos_maior = i;
				
			}
			if(vetor[i]< menor){
				menor = vetor[i];
				pos_menor = i;
			}
		}
	}
	printf("Dados inseridos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    // para mostrar a posiçao sem  considerar a posiçao  0 do vetor eu somei mais 1 nas posiçoes para mostrar o numero correto da posiçao sem condsiderar a posiçao do vetor 0
    printf("\nMaior: %d  posicao: %d\n", maior,pos_maior+1);
    printf("Menor: %d  posicao : %d\n", menor,pos_menor+1);

    return 0;


}
