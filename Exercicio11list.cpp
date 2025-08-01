// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 11

#include<stdio.h>
int main(){
	int soma, numero,multiplo;
	while (true){
		printf("Digite um numero\n");
		scanf("%d",&numero );
		if(numero == 0 ){
			break;
		}else{
			if(numero % 3 == 0 ){
				soma += numero;
			}
		
		}			
		
	}
	printf("a soma dos multiplos de 3 eh : %d\n",soma );
	
	return 0;	
	
}
