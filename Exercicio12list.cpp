// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 12
#include<stdio.h>
#include<math.h>
int main(){
	int num,expoente, resultado , total;
	resultado = 0;
	expoente = 0;
	total = 0;
	printf("Me informe um valor que iremos calcular  o somatorio de 3 elevado ate o numero digitado \n");
	scanf("%d",&num);
	while(expoente <= num)
	{
		resultado = pow (3,expoente);
		total += resultado;
		expoente ++;
	}
	
	printf("Esse eh o somatorio %d\n",total);
	
	
	
	
	
	
	return 0;	
}
	

