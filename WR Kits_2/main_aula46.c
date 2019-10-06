//--- Bibliotecas Utilizadas ---
#include <stdio.h>
#include <stdlib.h>

//--- Prototipo das Funções Auxiliares ----
void leArquivo(int *vet);

//--- Função Principal ----
int main(int argc, char *argv[]) {
	
	int vet[10];//vetor local de 10 posições
	
	leArquivo(vet);
	
	printf("Arquivo foi lido e enviado com sucesso\n\n");
	
	system("PAUSE");
	return 0;
}//end main

//---- Desenvolvimento das Auxiliares ---
void leArquivo(int *vet)
{
	char i = 0;//Varaiavel auxiliar de iterações
	
	FILE *arquivo;//Ponteiro para arquivo
	
	arquivo = fopen("teste.txt", "r");
	
	for(i=0;i<9;i++) fscanf(arquivo, "%d\n", &vet[i]);
	
	arquivo = fopen("teste02.txt","w");
	
	for(i=0;i<9;i++) fprintf(arquivo, "%d\n", vet[i]+2);
	
	fclose(arquivo);
	
}//end LeArquivo
