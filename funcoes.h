//Biblioteca de fun��es

#ifndef FUNCOES_H
#define FUNCOES_H
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//incluir fun��o de menu

// fun��o soma
int soma(int x, int y)
{
	int calculo = x + y;
	return calculo;
}

// fun��o subtra��o
int subtracao(int x, int y)
{
	int calculo = x - y;
	return calculo;
}

// fun��o multiplica��o
int multiplicacao(int x, int y)
{
	int calculo = x * y;
	return calculo;
}

// Fun��o divis�o
int divisao(int x, int y)
{
	int calculo = x / y;
	return calculo;
}

// Fun��o de porcentagem
float porcentagem (float valor, float porcent)
{
	float calculo = (porcent/100)*valor;
	return calculo;
}

// fun��o descobrir porcent de um n�mero
float descobrir_porcentagem_numero (float valor, float valor2)
{
	if (valor == 0)
	{
		valor = 1;
		float calculo = valor/valor2;
	}else
	{
		float calculo = (valor2*100)/valor;
	}
}


#endif

