#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(void)
{
	float n1,n2,plus,minus,times,div;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que l� 2 numeros e mostra o resultado de quatro opera��es \n");
	printf("\n");
	
	printf("Insira o PRIEMIRO n�mero : ");
	scanf("%f",&n1);
	
	printf("Insira o SEGUNDO n�mero : ");
	scanf("%f",&n2);
		
	plus=n1+n2;
	minus=n1-n2;
	times=n1*n2;
	div=n1/n2;
	
	printf("\n");	
	printf("A SOMA dos n�meros digitados � de : %f \n",plus);
	printf("\n");
	printf("A SUBTRA��O dos n�meros digitados � de : %f \n",minus);
	printf("\n");
	printf("A MULTIPLICA��O dos n�meros digitados � de : %f \n",times);
	printf("\n");
	printf("A DIVIS�O dos n�meros digitados � de : %f \n",div); 
	printf("\n");
	system("pause");
	return 0;
	
}
