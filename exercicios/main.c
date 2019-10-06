//Exe.10
#include <stdio.h>
    void main(){
    float n1,n2,media,faltas;
    printf ("\nDigite a primeira nota: ");
    scanf ("%f", &n1);
    printf ("\nDigite a segunda nota: ");
    scanf ("%f", &n2);
    media = (n1 + n2) / 2;
    printf ("\nNota final: %.2f", media);

    printf ("\nNumero de faltas: ");
    scanf ("%f", &faltas);

    if (faltas > 20) {
        printf ("\nREPROVADO ", n1);
    }
    if (media >= 6.0) {
            else if (faltas < 20) {
                printf ("\nAPROVADO ", n1);
            }
    }
    return 0;
}
