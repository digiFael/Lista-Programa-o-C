// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 6
#include<stdio.h>
#include<math.h>
int main (){
	int i;
	int soma,n,resultado; 
	int base, expoente;
	int potencia;
	soma = 0;

	printf("me informe um valor que eu vou calcular o somatorio das potencias ate o numero dado\n");
	scanf("%d",&n);
	base = n ;
	expoente = base;
	
	for(i= 1 ; i <= n ; i++){
		
		
		potencia = pow(i,i);
		printf("%d\n",potencia);
		soma += potencia;
		
		
	
	}
	printf("A soma das potencias eh %d",soma);
	 
return 0;
	
	
}

