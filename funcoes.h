//Biblioteca de funções

#ifndef FUNCOES_H
#define FUNCOES_H
//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//incluir função de menu

// função soma
int soma(int x, int y)
{
	int calculo = x + y;
	return calculo;
}

// função subtração
int subtracao(int x, int y)
{
	int calculo = x - y;
	return calculo;
}

// função multiplicação
int multiplicacao(int x, int y)
{
	int calculo = x * y;
	return calculo;
}

// Função divisão
int divisao(int x, int y)
{
	int calculo = x / y;
	return calculo;
}

// Função de porcentagem
float porcentagem (float valor, float porcent)
{
	float calculo = (porcent/100)*valor;
	return calculo;
}

// função descobrir porcent de um número
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

