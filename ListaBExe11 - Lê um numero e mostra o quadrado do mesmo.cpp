#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� 1 numero e mostra o quadrado dele \n");
	printf("\n");
	
	printf("Insira o PRIEMIRO n�mero : ");
	scanf("%f",&n1);
	
	r=n1*n1;
	
	printf("\n");	
	printf("%f� � igual a : %f\n",n1,r); 
	printf("\n");
	
	system("pause");
	return 0;
	
}
