// Atividade Avaliativa - Linguagem e tecnicas de programaçao 
// Ativida :Lista de Exercicio 2 - Exercicio 15
#include<stdio.h>
int main(){
	int opc;
	float t, convert;
	convert = 0;
	do{
		printf("       Menu de Opcoes\n1-Converter temperatura de Celsius para Fahrenheit\n2-Converter temperatura para Celsius para Kevin\n3-Converter temperatura de Fahrenehit para Celsius\n4-sair\n");
		scanf("%d",&opc);
		if(opc == 1 )
		{
			printf("me inform um valor em  Celsius para converte para Fahrenheit\n");
			scanf("%f",&t);
			convert = t * 1.8 + 32;
			printf("%.2f\n",convert);
				
		}
		if(opc == 2 )
		{
			printf("me inform um valor em  Celsius para converte para Kelvin\n");
			scanf("%f",&t);
			convert = t + 273.15;
			printf("%.2f\n",convert);
			
				
		}
		if (opc == 3)
		{
			printf("me inform um valor em Fahrenheit para converte para Celsius\n");
			scanf("%f",&t);
			convert = (t-32) / 1.8;
			printf("%.2f\n",convert);
			
		}
		
	}while (opc != 4 );
		printf("Voce saiu do programa\nObrigado \n");

	return 0;	
}
