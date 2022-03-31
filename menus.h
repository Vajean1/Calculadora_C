//Biblioteca de menus
#ifndef MENUS_H
#define MENUS_H

//bibliotecas importadas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

void menu_operacoes_basicas()
{
	system("color 20");
	system("cls");
	
	int escolha, continuar, valor_1, valor_2;
	
	printf("===============MENU-OPERAÇÔES-PRINCIPAIS===============\n\n");
	printf("[ 1 ] - Soma\n[ 2 ] - Subtração\n[ 3 ] - Multiplicação\n[ 4 ] - Divisão\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &escolha);

	switch(escolha)
	{
		case 1:{
			system("cls");
			printf("Você selecionou a opção soma.\n\n");
			do
			{
				printf("Digite o primeiro valor: ");
				scanf("%d", &valor_1);
				printf("Digite o segundo valor: ");
				scanf("%d", &valor_2);
				printf("O valor %d + %d é iguala: %d", valor_1, valor_2, soma(valor_1, valor_2));
				printf("\n\n Deseja continuar nesta operação?\n[ 0 ] - Não\n[ 1 ] - Sim\nQual opção deseja?");
				scanf("%d", &continuar);
				printf("\n\n\n");
				if (continuar == 0)
				{
					menu_operacoes_basicas();
					break;
				}
			}while(escolha == 1);
			break;
		}
		case 2:{
			system("cls");
			printf("Você selecionou a opção subtração.\n\n");
			do{
				printf("Digite o primeiro valor: ");
				scanf("%d", &valor_1);
				printf("Digite o segundo valor: ");
				scanf("%d", &valor_2);
				printf("O valor %d - %d é igual a: %d", valor_1, valor_2, subtracao(valor_1, valor_2));
				printf("\n\n Deseja continuar nesta operação?\n[ 0 ] - Não\n[ 1 ] - Sim\nQual opção deseja?");
				scanf("%d", &continuar);
				printf("\n\n\n");
				if (continuar == 0)
				{
					menu_operacoes_basicas();
					break;
				}
			}while(continuar == 1);
			break;
		}
		case 3:{
			system("cls");
			printf("Você selecionou a opção multiplicação.\n\n");
			do{
				printf("Digite o primeiro valor: ");
				scanf("%d", &valor_1);
				printf("Digite o segundo valor: ");
				scanf("%d", &valor_2);
				printf("O valor %d * %d é igual a: %d", valor_1, valor_2, multiplicacao(valor_1, valor_2));
				printf("\n\n Deseja continuar nesta operação?\n[ 0 ] - Não\n[ 1 ] - Sim\nQual opção deseja?");
				scanf("%d", &continuar);
				printf("\n\n\n");
				if (continuar == 0)
				{
					menu_operacoes_basicas();
					break;
				}
			}while(continuar == 1);
			break;
		}
		case 4:{
			system("cls");
			printf("Você selecionou a opção divisão.\n\n");
			do{
				printf("Digite o primeiro valor: ");
				scanf("%d", &valor_1);
				printf("Digite o segundo valor: ");
				scanf("%d", &valor_2);
				printf("O valor %d / %d é igual a: %d", valor_1, valor_2, divisao(valor_1, valor_2));
				printf("\n\n Deseja continuar nesta operação?\n[ 0 ] - Não\n[ 1 ] - Sim\nQual opção deseja?");
				scanf("%d", &continuar);
				printf("\n\n\n");
				if (continuar == 0)
				{
					menu_operacoes_basicas();
					break;
				}
			}while(continuar == 1);
			break;
		}
	}	
}

void menu_porcentagem()
{
	system("color 20");
	system("cls");
	
	int escolha, continuar;
	float valor_1, valor_2, porcent;
	
	printf("===============MENU-PORCENTAGEM===============\n\n");
	printf("[ 1 ] - Descobrir porcentagem\n[ 2 ] - Descobrir quanto um número representa de porcentagem em relação a outro.\n[ 3 ] - Desconto\n[ 4 ] - Aumento\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &escolha);
	
	switch (escolha)
	{
		case 1:{
			system("cls");
			printf("Você escolheu a opção Descobrir porcentagem.\n\n");
			do{
				printf("Digite o valor: ");
				scanf("%f", &valor_1);
				printf("Digite a porcentagem: ");
				scanf("%f", &porcent);
				printf("O número %.1f representa %.1f porcento de %.1f. \n\n\n", porcentagem(valor_1, porcent), porcent, valor_1);
				printf("\n\n Deseja continuar nesta operação?\n[ 0 ] - Não\n[ 1 ] - Sim\nQual opção deseja?");
				scanf("%d", &continuar);
				printf("\n\n\n");
				if (continuar == 0)
				{
					menu_operacoes_basicas();
					break;
				}
			}while(continuar == 1);
			break;
		}
		case 2:{
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
	}
}


#endif

