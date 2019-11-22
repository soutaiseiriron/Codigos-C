#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

main(void)
{
	int n1,n2,n3,n4;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê quatro números e soma os três menores.\n");
	printf("\n");
	
	printf("Insira o primeiro número : ");
	scanf("%d",&n1);
	
	printf("Insira o segundo número : ");
	scanf("%d",&n2);
	
	printf("Insira o terceiro número : ");
	scanf("%d",&n3);
	
	printf("Insira o quarto número : ");
	scanf("%d",&n4);
	printf("\n");
	
	int cutequals = false;
	
	if (cutequals == false)
	{
		if ((n1 == n2) && (n2 == n3) && (n3 == n4)) cutequals = true;
	}
	
	if (cutequals == false)
	{
		if ((n1 > n2) && (n1 > n3) && (n1 > n4))
		{
			printf("A soma dos 3 menores é %d \n",n2+n3+n4);
		}
		else
		if ((n2 > n1) && (n2 > n3) && (n2 > n4))
		{
			printf("A soma dos 3 menores é %d \n",n1+n3+n4);
		}
		else
		if ((n3 > n2) && (n3 > n4) && (n3 > n1))
		{
			printf("A soma dos 3 menores é %d \n",n2+n1+n4);
		}
		else
		if ((n4 > n2) && (n4 > n1) && (n4 > n3))
		{
			printf("A soma dos 3 menores é %d \n",n2+n3+n1);
		}
	}
	
	if (cutequals) printf("Os números devem ter ao menos 1 diferente dos demais \n");
	printf("\n");	
	system("pause");
	return 0;
}
