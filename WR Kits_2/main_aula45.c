#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *arquivo;//Cria um ponteiro para um arquivo
	
	arquivo = fopen("teste.txt","w");//Abre um arquivo para escrita do tipo txt
	
	fprintf(arquivo,"Hello World!!");//Escreve mensagem no arquivo
	
	fclose(arquivo);//Fecha o arquivo
	
	system("PAUSE");
	return 0;
}
