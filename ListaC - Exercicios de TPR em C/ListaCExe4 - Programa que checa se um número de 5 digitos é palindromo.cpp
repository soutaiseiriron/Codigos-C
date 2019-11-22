#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(void)
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	 
	int num,num1, digito, reverso = 0, contador = 0;
	 
	printf("Programa que checa um palíndromo de 5 digitos \n");
	printf("\n");
	printf("Insira um número inteiro de 5 digitos : ");
	scanf("%d", &num);
	
	printf("\n");
	
	num1 = num;
	
	while(num > 0) 
	{
		digito = num % 10;
    	num = num / 10;
		reverso = digito + reverso * 10;
		contador++;
	}
	
	if (contador == 5) 
	{
		if(num1 == reverso) printf("O número %d é um Palíndromo \n", num1);
		else printf("O número %d não é um Palíndromo \n",num1);
	}
	else 
	{
		printf("O número digitado precisa ser de 5 digitos. \n",num1);
	}
		 
	printf("\n");
	
	system("pause");
	return 0;
}

