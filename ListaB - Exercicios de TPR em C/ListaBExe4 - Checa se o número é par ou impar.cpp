#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	///Variables
	int num,verifica;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que checa se é par ou impar \n");
	printf("Insira um número : ");
	scanf("%d",&num);
	
	if (num % 2 == 0) 
	{
		verifica = true;
	}
	else
	{
		verifica = false;
	}
	printf("\n");	
	if (verifica == true) printf("O número digitado é : PAR \n");
	else printf("O número digitado é : ÍMPAR \n");
	
	system("pause");
	return 0;
}
