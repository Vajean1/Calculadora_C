//Arquivo de testes para a inclus�o no main

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"
#include "menus.h"

void main()
{
	system("color 20");
	setlocale(LC_ALL, "Portuguese");
	
	menu_porcentagem();
	
}

