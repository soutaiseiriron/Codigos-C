#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

main(void)
{
	float salario,salariofinal;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que faz reajustes de sal�rio.\n");
	printf("\n");
	
	printf("Insira o valor de seu sal�rio: \n");
	scanf("%f",&salario);
	
	printf("\n");
	
	if(salario>300)
	{
		salariofinal=salario+salario*0.30;
			printf("O sal�rio reajustado � : %f \n",salariofinal);
	}
	else
	{
		salariofinal=salario+salario*0.50;
			printf("O sal�rio reajustado � : %f \n",salariofinal);	
	}
		
	system("pause");
	return 0;
}	
	

