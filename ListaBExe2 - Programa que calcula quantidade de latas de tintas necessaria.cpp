#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(void)
{
	//Vai braziliam
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Variables
	float raio,altura,area_cilindro,quant_lata,quant_litro,preco_final;
	
	printf("Programa que calcula quantidade de latas e preço \n");
	printf("\n");
	printf("Insira o raio : ");
	scanf("%f",&raio);
	printf("\n");
	printf("Insira a altura : ");
	scanf("%f",&altura);
	printf("\n");
	area_cilindro = (3.14*raio*raio) + (2*3.14*raio*altura);
	quant_lata = area_cilindro/3;
	quant_litro = quant_lata/5;
	preco_final = quant_lata*20;
	
	
	printf("A área do cilindro é  : %.2f \n",area_cilindro);
	printf("A  quantidade de latas necessaria  é de : %.2f \n",quant_lata);
	printf("O valor é de : %.2f \n",preco_final);
	printf("\n");
	
	system("PAUSE");
	return 0;
	
}
