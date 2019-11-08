#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void)
{
	int idade;
	char nome[45];
	
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("-------------------------------- \n");
	printf("Seu nome e : %s \n", nome);
	printf("Sua idade e : %d \n", idade);
	
	system("pause");
	return 0;	
}
