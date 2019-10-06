//Calculo da média de quatro provas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main () {

    setlocale(LC_ALL, "Portuguese");
    float p1,p2,p3,p4,res;
    printf("Digite sua primeira nota: \n");
    scanf("%f",&p1);
    printf("Digite sua segunda nota: \n");
    scanf("%f",&p2);
    printf("Digite sua terceira nota: \n");
    scanf("%f",&p3);
    printf("Digite sua quarta nota: \n");
    scanf("%f",&p4);
    res = (p1+p2+p3+p4)/4;
    printf("Sua media final eh: %.2f\n",res);
    return 0;
}
