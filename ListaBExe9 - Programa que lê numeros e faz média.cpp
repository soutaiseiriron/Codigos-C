#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,n2,n3,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� 3 numeros e mostra a m�dia aritm�tica \n");
	printf("\n");
	
	printf("Insira o PRIEMIRO n�mero : ");
	scanf("%f",&n1);
	
	printf("Insira o SEGUNDO n�mero : ");
	scanf("%f",&n2);
	
	printf("Insira o TERCEIRO n�mero : ");
	scanf("%f",&n3);
	
	r=(n1+n2+n3)/3;
	
	printf("\n");	
	printf("A m�dia dos n�meros digitados � de : %f \n",r); 
	
	system("pause");
	return 0;
	
}
