//ATIVIDADE AVALIATIVA - LINGUAGEM E T�CNICAS DE PROGRAMA��O
//Atividade: Lista de Exerc�cios 2 - Exerc�cio 19
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
    // para mostrar a posi�ao sem  considerar a posi�ao  0 do vetor eu somei mais 1 nas posi�oes para mostrar o numero correto da posi�ao sem condsiderar a posi�ao do vetor 0
    printf("\nMaior: %d  posicao: %d\n", maior,pos_maior+1);
    printf("Menor: %d  posicao : %d\n", menor,pos_menor+1);

    return 0;


}
