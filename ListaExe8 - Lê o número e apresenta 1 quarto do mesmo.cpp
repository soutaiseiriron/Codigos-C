#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê um número e mostra 1/4 desse número \n");
	printf("\n");
	
	printf("Insira o número : ");
	scanf("%f",&n1);
	
	r=n1/4;
	
	printf("\n");	
	printf("O 1/4 de : %f é de %f: ",n1,r); 
	
	system("pause");
	return 0;
	
}
