#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float saldo,saldoFinal;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê saldo e faz reajuste de 2% \n");
	printf("\n");
	
	printf("Insira o seu SALDO número : ");
	scanf("%f",&saldo);
	
	saldoFinal = saldo + saldo * .02;
	
	printf("\n");	
	printf("Saldo final após o reaajuste é igual a : %f",saldoFinal); 
	printf("\n");
	
	system("pause");
	return 0;
	
}
