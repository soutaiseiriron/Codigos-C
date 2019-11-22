#include <stdio.h>
#include <stdlib.h>

main(void)
{

	float num1,num2;
	printf("Insira dois numeros reais \n");
	printf("-------------------------------- \n");
	
	printf("Insira o primeiro numero : ");
	scanf ("%f",&num1);
	
	printf("Insira o segundo numero : ");
	scanf ("%f",&num2);
	
	printf("\n");
	
	printf("Os numeros reais sao %f",num1);
	printf(" e %f",num2);
	
	printf("\n");
	
	system("pause");
	return 0;
}
