#include <stdio.h>
#include <stdlib.h>

/*

	Passando Struct para fun��es
	
	tipo nome_fun��o(parametos,argumentos);
*/

struct estrutura
{
	int a, b;
	char c;
};

void imprimir (struct estrutura parametro)
{
	printf("%c\n", parametro.c);
}

int main(int argc, char *argv[]) {
	
	struct estrutura argumento;
	
	argumento.c = 'f';
	
	imprimir(argumento);
	
	system("PAUSE");
	return 0;
}
