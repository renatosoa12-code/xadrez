#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{

	// VARIAVEIS



	// TORRE 5 CASAS PARA DIREITA
	printf("\n\nTORRE\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Direita\n");
	}

	// BISPO 5 DIAGONAL CIMA DIREITA
	printf("\n\nBISPO\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Cima\nDireita\n");
	}

	// RAINHA 8 ESQUERDA
	printf("\n\nRAINHA\n");
	for (int i = 0; i < 8; i++)
	{
		printf("Esquerda\n");
	}

	return 0;
}