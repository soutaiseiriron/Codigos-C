#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	///Variables
	int num,verifica;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que checa se � par ou impar \n");
	printf("Insira um n�mero : ");
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
	if (verifica == true) printf("O n�mero digitado � : PAR \n");
	else printf("O n�mero digitado � : �MPAR \n");
	
	system("pause");
	return 0;
}
