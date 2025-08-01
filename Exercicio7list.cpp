// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 7
#include <stdio.h>
#include <math.h>
int main(){
	int numero, fatorial;
	fatorial = 1;
	printf("Me informe um valor  maior que zero que vamos calcular o seu fatorial\n");
	scanf("%d",&numero);
	for(int i = numero ; i >= 1 ; i-- )
	{
		printf("%d\n",i);
		fatorial *= i ;
	}
	printf("%d",fatorial);
	return 0;
}
