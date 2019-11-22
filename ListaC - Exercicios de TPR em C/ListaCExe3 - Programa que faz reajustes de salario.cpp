#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

main(void)
{
	float salario,salariofinal;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que faz reajustes de salário.\n");
	printf("\n");
	
	printf("Insira o valor de seu salário: \n");
	scanf("%f",&salario);
	
	printf("\n");
	
	if(salario>300)
	{
		salariofinal=salario+salario*0.30;
			printf("O salário reajustado é : %f \n",salariofinal);
	}
	else
	{
		salariofinal=salario+salario*0.50;
			printf("O salário reajustado é : %f \n",salariofinal);	
	}
		
	system("pause");
	return 0;
}	
	

