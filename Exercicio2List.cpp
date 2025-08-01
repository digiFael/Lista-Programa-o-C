// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 2
#include <stdio.h>
int main(){
	int soma ,  i;
	soma = 0;
	for (i = 1 ; i <=500 ; i++)
	{
	 	if (i % 3 == 0 && i % 2 == 1){
	 		
			printf("%d\n",i); 
			soma += i;
		 } 
		 
	}
	 printf("a soma eh %d\n",soma);
	 
	
	
return 0;
}
