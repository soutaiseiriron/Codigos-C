#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	int n1,n2,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� e subtra� n�meros inteiros \n");
	printf("\n");
	
	printf("Insira o PRIMEIRO n�mero : ");
	scanf("%d",&n1);
	
	printf("Insira o SEGUNDO n�mero : ");
	scanf("%d",&n2);
	
	r=n1-n2;
	
	printf("\n");	
	printf("A subtra��o dos n�meros digitados � de : %d \n",r);
	
	system("pause");
	return 0;
	
}
