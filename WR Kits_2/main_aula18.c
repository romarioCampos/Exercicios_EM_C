#include <stdio.h>
#include <stdlib.h>

#define DIML	5
#define DIMC	30

//tipo nome {dim1}{dim2}{dim3}......{dimN}

int main(int argc, char *argv[]) {
	
	int i, j; //variáveis para iteração
	
	int nomes[DIML] [DIMC];
	
	for(i = 0; i < DIML; i++)
	{
		printf("Entre com a linha %d\t", i);
		scanf("%s", &nomes[i]);
		getchar();
	}
	
	for(i = 0; i < DIML; i++)
	{
		printf("O nome %d eh\t", i);
		printf(nomes[i]);
	}
	
	system("PAUSE");
	return 0;
}
