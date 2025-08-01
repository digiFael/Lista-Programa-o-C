// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 16
#include<stdio.h>
#include<math.h>
int main (){
	float raiz,num;
	do{
		printf("Digite um valor para saber qual a raiz desse numero\n");
		scanf("%f",&num);
		if(num > 0)
		{
			raiz = sqrt(num);
			printf("%.2f\n",raiz);
		}
		
		
	}while(num > 0);
	
	
	return 0;
	
	
	
}
