// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 13
#include<stdio.h>
int main(){
	int opc;
	double a,b,resultado;
	while(opc != 5){
	printf("1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n5-Sair\n");
	printf("Me informe a opcao desejada\n");
	scanf("%d",&opc);
	printf("Me informe o valor de dois numeros para fazermos a operacao\n");
	scanf("%d %d",&a,&b);
		if(opc == 1)
		{
			resultado = a + b;
			printf("O resultado da soma eh : %d\n",resultado);
			break;	
		}else{
			if(opc == 2)
			{
				resultado = a - b;
				printf("O resultado da subtracao eh : %d\n",resultado);
				break;
			}else{
				if(opc == 3)
				{
					resultado = a / b;
					printf("O resultado da divisao eh : %.2f\n",resultado);
					break;	
				}else{
					if(opc == 4)
					{
						resultado = a * b;
						printf("O resultado da multiplicacao eh : %d\n",resultado);
						break;
					}
					
					
				}
				
			}
		}
	
	}
printf("Obrigado \n");
	
	
	
	
	
return 0;	
}
