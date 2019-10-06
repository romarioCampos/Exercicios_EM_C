//--- Matrizes como Paramêtros para Funções

// -- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

// --- Prototipos das Funções Auxiliares
void exemplo1(int mat1[10]);
void exemplo2(int mat2[]);
void exemplo3(int *point);

//--- Função Pincipal ----
int main(int argc, char *argv[]) {
	
	int t[10], i;
	
	for(i=0; i<10; i++) t[i] = i;
	
	exemplo3(t);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}//end main

//---- Desenvolvimento das Funções Auxiliares -----
void exemplo1(int mat1[10])
{
	int i;
	
	for(i=0; i<10; i++) printf("%d ", mat1[i]);
}//end exemplo1

void exemplo2(int mat2[])
{
	int i;
	
	for(i=0; i<10; i++) printf("%d ", mat2[i]);
}//end exemplo2

void exemplo3(int *point)
{
	int i;
	
	for(i=0; i<10; i++) printf("%d", point[i]);
}//end exemplo3
