#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

main(void)
{
	int n1,n2,n3;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� 3 n�meros e faz a soma, m�dia e o produto.\n");
	printf("\n");
	
	printf("Insira o primeiro n�mero : ");
	scanf("%d",&n1);
	
	printf("Insira o segundo n�mero : ");
	scanf("%d",&n2);
	
	printf("Insira o terceiro n�mero : ");
	scanf("%d",&n3);
	
	printf("\n");
	
	printf("A soma dos n�meros � de: %d \n",n1+n2+n3);
	printf("A m�dia dos n�meros � de: %d \n",(n1+n2+n3)/3);
	printf("O produto dos n�meros � de: %d \n",n1*n2*n3);
			
	system("pause");
	return 0;
}

