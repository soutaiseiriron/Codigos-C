#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void)
{
	char nome[45];
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	
	printf("-------------------------------- \n");
	printf("Seu nome e : %s \n", &nome);
	
	system("pause");
	return 0;	
}
