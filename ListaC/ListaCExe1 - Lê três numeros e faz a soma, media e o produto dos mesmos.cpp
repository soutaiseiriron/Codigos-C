#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale>

main(void)
{
	int n1,n2,n3;
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Programa que lê 3 números e faz a soma, média e o produto.\n");
	printf("\n");
	
	printf("Insira o primeiro número : ");
	scanf("%d",&n1);
	
	printf("Insira o segundo número : ");
	scanf("%d",&n2);
	
	printf("Insira o terceiro número : ");
	scanf("%d",&n3);
	
	printf("\n");
	
	printf("A soma dos números é de: %d \n",n1+n2+n3);
	printf("A média dos números é de: %d \n",(n1+n2+n3)/3);
	printf("O produto dos números é de: %d \n",n1*n2*n3);
			
	system("pause");
	return 0;
}

