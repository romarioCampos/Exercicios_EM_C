// --- Bibliotecas Utilizadas ---
#include <stdio.h>
#include <stdlib.h>

// --- Fun��o Principal ---
int main(){
	
	FILE *arquivo;
	char frase[50];
	
	printf("Digite a frase para salvar: \n\n");
	scanf("%s", frase);
	
	arquivo = fopen("string.txt","w");
	
	fwrite(frase,1,strlen(frase),arquivo);
	
	fclose(arquivo);
	
	printf("Arquivo criado com sucesso!\n\n");
	
	system("PAUSE");
	return 0;
}//end fun��o principal
