#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(void)
{
	int a,b,c,ab,bc,ac;
	
	//Vai braziliam
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	//Title
	printf("Programa que checa se e possivel formar um triangulo � qual o tipo \n");
	printf("-------------------------------------------------------------------\n");
		
	//Recebe Valores	
	printf("Insira o valor de a : ");
	scanf("%d",&a);
	printf("Insira o valor de b : ");
	scanf("%d",&b);
	printf("Insira o valor de c : ");
	scanf("%d",&c);
	printf("-------------------------------------------------------------------\n");
	
	//Insere nos lados
	ab = a+b;
	bc = b+c;
	ac = a+c;
	
	//Checa se � triangulo
	if ((a<bc) && (b<ac) && (c<ab))
	{
		printf("E possivel formar um triangulo com os valores informados. \n");
		
		//Para Isoceles
		if ( ((a==b) && (a!=c)) || ((b==c) && (b!=a)) || ((a==c) && (a!=b)) )
		{
			printf("� o triangulo � um triangulo Isoceles \n");
		}
		
		//Para Equilatero
		if ((a==b) && (a==c))
		{
			printf("� o triangulo � um triangulo Equilatero \n");
		}
		
		//Para Escaleno
		if ((a!=b) && (b!=c) && (c!=a))
		{
			printf("� o triangulo � um triangulo Escaleno \n");
		}
	}
	else
	{
		printf("� impossivel formar um triangulo \n");
	}
	printf("\n");
	
	system("pause");
	return 0;
}
