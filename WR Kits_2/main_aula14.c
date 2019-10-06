#include <stdio.h>
#include <stdlib.h>

/* 

	int x;
	
	While(x<10)
	{
		//comandos....
		x++;
	}
	
	Do
	{
		//comandos...
		
		
	}while(condição)
	
	
	Do-While
	for(x=0;x<10;x++)
	{
		//iteração!
	}

 */

int main(int argc, char *argv[]) {
	
	int opcao=1;
	
	do
	{
		printf("Digite a opcao: 1 - sim, 2 - nao\n");
		scanf("%d", &opcao);
		getchar();
	}while(opcao < 1 || opcao > 2);
	
	system("PAUSE");
	return 0;
}
