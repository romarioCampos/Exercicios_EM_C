#include <stdio.h>
#include <stdlib.h>

// Ponteiros (indexação)

int main(int argc, char *argv[]) {
	
	int mat[20] = {1,8,3,7,5,3,7,23,68,10,1,2,3,4,5,6,7,8,15,91,150};
	int *point, i;
	
	point = mat;
	
	for(i=0;i<20;i++) printf("%d\n", *(point+i));
	
	
	system("PAUSE");
	return 0;
}
