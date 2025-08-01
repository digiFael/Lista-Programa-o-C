// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 10
#include<stdio.h>
int main(){
	int numero, maior , menor ;
	printf("Digite um numero\n");
	scanf("%d",&numero );
	maior = numero;
	menor = numero;
	while (true){
		printf("Digite um numero\n");
		scanf("%d",&numero );
		if(numero == 0 ){
			break;
		}
		if(numero > maior)
		{
			maior = numero;
		}else{
			if(numero < menor )
			{
				menor = numero;
					
			}
		}
	}
	printf("O maior numero eh : %d\n",maior);
	printf("O menor numero eh : %d\n",menor);
	
	return 0;	
	
}
