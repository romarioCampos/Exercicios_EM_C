#include <stdio.h>
#include <stdlib.h>

//	&	*

// tipo	*nome;

int main(int argc, char *argv[]) {
	
	float variavel = 250.7;	//variavel inteira com o valor 250
	int *ponteiro;		// ponteiro para a variavel
	float exibe;			// variavel que vai exibir o valor 250
	
	ponteiro = &variavel;	// ponteiro est� a apontando o endere�o da variavel
	
	exibe = *ponteiro;	// a variavel exibe recebe o conteudo do endere�o para o qual o ponteiro aponta
	
	//250
	
	printf("\n%f\n", exibe);
			
	system("PAUSE");
	return 0;
}
