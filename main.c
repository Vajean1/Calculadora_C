//Arquivo main - Menu principal para as funções

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu_principal()
{
	system("color 20");
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	printf("===============Calculadora===============\n\n");
	printf("++++++++++MENU-PRINCIPAL++++++++++\n\n\n\n");
	printf("[ 1 ] - Operações Básicas\n[ 2 ] - Porcentagem\n[ 3 ] - Juros\n[ 4 ] - Regra de 3\n[ 5 ] - Operações com frações\n[ 6 ] - Área\n[ 7 ] - Volume\n\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &escolha);
	
	switch(escolha)
	{
		case 1:{
			//chamar a função que irá estar em uma biblioteca.
			printf("Operações básicas");
			break;
		}
		case 2:{
			printf("Porcentagem");
			break;
		}
		case 3:{
			printf("Juros");
			break;
		}
		case 4:{
			printf("Regra de 3");
			break;
		}
		case 5:{
			printf("Operações com frações");
			break;
		}
		case 6:{
			printf("Área");
			break;
		}
		case 7:{
			printf("Volume");
			break;
		}
		default:{
			printf("Escolha uma opção adequada. Seu corno(a)");
			break;
		}
	}
}

void main()
{
	menu_principal();
}

