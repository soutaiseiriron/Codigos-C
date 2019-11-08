#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(void)
{

	int num1,ant,suce;
	printf("Programa que mostra o antecessor e o sucessor \n");
	printf("-------------------------------- \n");
	
	printf("Insira um numero: ");
	scanf ("%d",&num1);
	
	ant=num1-1;
	suce=num1+1;
	
	printf(" \n");
	printf("O antecessor do numero digitado e : %d \n",ant);
	printf("O sucessor do numero digitado e : %d \n",suce);
	
	system("pause");
	return 0;
}
