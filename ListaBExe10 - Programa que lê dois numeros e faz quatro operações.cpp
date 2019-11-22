#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,n2,plus,minus,times,div;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê 2 numeros e mostra o resultado de quatro operações \n");
	printf("\n");
	
	printf("Insira o PRIEMIRO número : ");
	scanf("%f",&n1);
	
	printf("Insira o SEGUNDO número : ");
	scanf("%f",&n2);
		
	plus=n1+n2;
	minus=n1-n2;
	times=n1*n2;
	div=n1/n2;
	
	printf("\n");	
	printf("A SOMA dos números digitados é de : %f \n",plus);
	printf("\n");
	printf("A SUBTRAÇÃO dos números digitados é de : %f \n",minus);
	printf("\n");
	printf("A MULTIPLICAÇÃO dos números digitados é de : %f \n",times);
	printf("\n");
	printf("A DIVISÃO dos números digitados é de : %f \n",div); 
	printf("\n");
	system("pause");
	return 0;
	
}
