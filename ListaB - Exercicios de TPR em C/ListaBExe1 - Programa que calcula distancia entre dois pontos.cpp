#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(void)
{
	//Vai braziliam
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float x1,x2,y1,y2,distanceFinal;
	
	//Title
	printf("Programa que calcula distancia entre dois pontos\n");
	printf("------------------------------------------------\n");
	
	//Ler x1,y1 do primeiro ponto
	printf("Insira o primeiro ponto : \n");
	printf("\n");
	printf("Valor de x1 : ");
	scanf("%f",&x1);
	printf("Valor de y1 : ");
	scanf("%f",&y1);
	printf("------------------------------------------------\n");
	
	//Ler x2,y2 do segundo ponto
	printf("Insira o segundo ponto : \n");
	printf("\n");
	printf("Valor de x2 : ");
	scanf("%f",&x2);
	printf("Valor de y2 : ");
	scanf("%f",&y1);
	printf("------------------------------------------------\n");
	
	distanceFinal= (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1); 
	
	
	printf("A distancia é de : %d",sqrt(distanceFinal));
	printf("\n");

	printf("\n");
	system("pause");
	return 0;	
}
