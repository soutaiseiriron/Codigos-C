#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,n2,n3,r;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê 3 numeros e mostra a média aritmética \n");
	printf("\n");
	
	printf("Insira o PRIEMIRO número : ");
	scanf("%f",&n1);
	
	printf("Insira o SEGUNDO número : ");
	scanf("%f",&n2);
	
	printf("Insira o TERCEIRO número : ");
	scanf("%f",&n3);
	
	r=(n1+n2+n3)/3;
	
	printf("\n");	
	printf("A média dos números digitados é de : %f \n",r); 
	
	system("pause");
	return 0;
	
}
