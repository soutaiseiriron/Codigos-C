#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float base,height,per,area;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� medidas de um ret�ngulo e mostra o perimetro e a �rea \n");
	printf("\n");
	
	printf("Insira a base : ");
	scanf("%f",&base);
	
	printf("Insira a Altura : ");
	scanf("%f",&height);
	
	per = base+height;
	area = base*height;
	
	printf("\n");	
	printf("O perimetro dos valores informados � de : %f \n",per);
	printf("A �rea dos valores informados � de : %f \n",area); 
	printf("\n");
	
	system("pause");
	return 0;
	
}
