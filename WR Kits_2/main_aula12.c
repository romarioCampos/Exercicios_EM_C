#include <stdio.h>
#include <stdlib.h>

// Aplica��es n�o convencionais do la�o for

// Utilizar mais de uma variavel no la�o for

// Imprmir os n�meros pares de 0 a 100

int main(int argc, char *argv[]) {
	
	int i,j;
	
	for(i=0,j=0;i+j <= 100; i++, j++)
	{
		printf("%d\n", i+j);
	}
	
	system("PAUSE");
	return 0;
}
