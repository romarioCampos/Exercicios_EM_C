// --- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estruturas.h"

// --- Protótipo das Funções Auxiliares ---
void converte_csv(char *arquivo);

// --- Função Principal ---
int main(int argc, char *argv[]) {
	
	converte_csv("dados.bin");
	
	printf("Conversao bem sucedida!\n\n");
	
	system("PAUSE");
	return 0;
}//end main
