#include <stdio.h>
#include <stdlib.h>

//

typedef struct relogio{
	int segundos;
	int minutos;
	int horas;
	int dias;
	int meses;
	int anos
} relogio_t;

typedef struct registro{
	int numero;
	relogio_t data_hora;
	int leitura;
	int teste;
} registro_t;

int main(){
	int n=0;
	registro_t x[60];
	FILE *LeituraBin;
	
	LeituraBin = fopen("dados.bin","rb");
	fread(&x[0],sizeof(registro_t),1,LeituraBin);
	
	for(n=0;n<60;n++){
		printf("%d\t%d\n", n,x[n].numero);
	}
}
