//Arquivo main - Menu principal para as fun��es

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
	printf("[ 1 ] - Opera��es B�sicas\n[ 2 ] - Porcentagem\n[ 3 ] - Juros\n[ 4 ] - Regra de 3\n[ 5 ] - Opera��es com fra��es\n[ 6 ] - �rea\n[ 7 ] - Volume\n\n");
	printf("Digite a op��o desejada: ");
	scanf("%d", &escolha);
	
	switch(escolha)
	{
		case 1:{
			//chamar a fun��o que ir� estar em uma biblioteca.
			printf("Opera��es b�sicas");
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
			printf("Opera��es com fra��es");
			break;
		}
		case 6:{
			printf("�rea");
			break;
		}
		case 7:{
			printf("Volume");
			break;
		}
		default:{
			printf("Escolha uma op��o adequada. Seu corno(a)");
			break;
		}
	}
}

void main()
{
	menu_principal();
}

