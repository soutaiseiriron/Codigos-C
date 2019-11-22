#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

main(void)
{
	///Variables
	char nome[100],end[100],tel[20];
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Insira seu nome : ");
	scanf("%s",&nome);
	printf("\n");
	
	printf("Insira seu endereço : ");
	scanf("%s",&end);
	printf("\n");
	
	printf("Insira seu telefone : ");
	scanf("%s",&tel);
	printf("\n");
	
	printf("-------------------------------- \n");
	printf("Os dados digitados foram : \n");
	
	printf("\nNome : %s",nome);
	printf("\nEndereço : %s",end);
	printf("\nTelefone : %s",tel);
	printf("\n");
	
	system("pause");
	return 0;
}
