// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 13
#include<stdio.h>
int main(){
	int num,fat,i;
	fat = 1;
	printf("Me informe um numero positivo e inteiro para calcularmos o seu fatorial:\n");
	scanf("%d",&num);
	i = num;
	while(i> 1){
		fat *= i;
		i--;	
		
	}
	printf("o Fatorial do numero digitado eh: %d\n",fat);

return 0;

		
}
