#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Ponteiro e Matrizes

int main(int argc, char *argv[]) {
	
	char mat[30], *point;
	
	printf("Entre com uma frase maiuscula: \n");
	scanf("$s", &mat);
	getchar();
	
	printf("Frase em letra minuscula: ");
	
	point = mat;
	
	while(*point) printf("%c", tolower(*point++));
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}

/*
	char mat[30];
	int i;
	
	printf("Entre com uma frase em letra maiuscula\n");
	scanf("%s", &mat);
	getchar();
	
	printf("Frase minusculas: ");
	
	for(i=0;mat[i];i++) printf("%c", tolower(mat[i]));
	
	printf("\n\n");
*/
