#include <stdio.h>
#include <stdlib.h>

/* 

	for(inicializa��o;condi��o;incremento){
		comandos;
	}

 */

int main(int argc, char *argv[]) {
	
	int i,j;
	
	for(i=0;i<10;i++){
		printf("\nLinha %d\n",i);{
			for(j=0;j<5;j++){
				printf("\nTeste %d\n",j);
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
