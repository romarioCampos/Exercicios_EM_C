#include <stdio.h>
#include <stdlib.h>

/*Este programa não dve ser executado*/

int main(int argc, char *argv[]) {
	
	int var2, *pointer;
	
	var2 = 88;
	
	pointer = &var2;
	
	printf("\n%d\n", *pointer);
	
	system("PAUSE");
	return 0;
}
