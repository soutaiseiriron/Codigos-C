#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float price,des,priceDes,priceFinal;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que calcula desconto\n");
	printf("\n");
	
	printf("Insira o PREÇO do produto : ");
	scanf("%f",&price);
	
	printf("Insira o valor do DESCONTO : ");
	scanf("%f",&des);
	
	priceDes = (price*des)/100;
	priceFinal = price-priceDes;
	
	printf("\n");	
	printf("O preço do produto após o desconto é igual a : %f",priceFinal); 
	printf("\n");
	
	system("pause");
	return 0;
	
}
