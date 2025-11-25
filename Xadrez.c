#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

void torre(int t) {
	if (t == 0) { return; }
	printf("Direita\n");
	torre(t - 1);
}

void rainha(int r) {
	if (r == 0) { return; }
	printf("Esquerda\n");
	rainha(r - 1);
}

void bispo(int b) {
	if (b == 0) { return; }
	for (int v = 0; v < 5; v++) {
		printf("Cima\n");
		for (int h = 0; h < 1; h++)
			printf("Direita\n");
	}
	bispo(b - 1);
}

int main()
{

	// VARIAVEIS


	// TORRE 5 CASAS PARA DIREITA
	printf("\n\nTORRE\n");
	torre(5);

	// BISPO 5 DIAGONAL CIMA DIREITA
	printf("\n\nBISPO\n");
	bispo(1);
	// RAINHA 8 ESQUERDA
	printf("\n\nRAINHA\n");
	rainha(8);

	// CAVALO CIMA CIMA DIREITA

	printf("\n\nCAVALO\n");
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("Cima\n");
		}
		printf("Direita\n");
	}

	return 0;
}
