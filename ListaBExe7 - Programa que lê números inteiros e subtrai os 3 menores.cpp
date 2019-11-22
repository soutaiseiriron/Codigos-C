#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	int n1,n2,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê e subtraí números inteiros \n");
	printf("\n");
	
	printf("Insira o PRIMEIRO número : ");
	scanf("%d",&n1);
	
	printf("Insira o SEGUNDO número : ");
	scanf("%d",&n2);
	
	r=n1-n2;
	
	printf("\n");	
	printf("A subtração dos números digitados é de : %d \n",r);
	
	system("pause");
	return 0;
	
}
