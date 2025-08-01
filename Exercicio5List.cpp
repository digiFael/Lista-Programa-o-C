// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 5
#include<stdio.h>
int main(){
	int m, n ,soma;
	soma = 0;
	printf ("Me informe o intervalo que vamos calcular o somatorio dos numeros impares\n");
	scanf("%d %d",&m,&n);
	for ( int i = m ; i <= n; i++)
	{
		if(i % 2 == 1 )
		{
		 	printf("%d é impar \n",i);
		 	soma += i;
			
		}
	
	}
	printf("%d",soma);
	
		
return 0;
}
