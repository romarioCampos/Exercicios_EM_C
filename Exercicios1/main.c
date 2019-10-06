/*
Ex.01)
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Inicio do Programa\nFim\n");
    system("pause");
    return 0;
}*/

/*
Ex.02)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    printf("%d\n",x);
    system("pause");
    return 0;
}*/

/*
Ex.03)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    printf("Valor lido %d\n",x);
    system("pause");
    return 0;
}*/

/*
Ex.04)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    printf("%f\n",x);
    system("pause");
    return 0;
}*/

/*
Ex.05)
#include <stdio.h>
#include <stdlib.h>
int main() {
    float y = 5.5;
    printf("%d\n",y);
    system("pause");
    return 0;
}*/

/*
Ex.06)
#include <stdio.h>
#include <stdlib.h>
int main() {
    double a = 10.5;
    printf("%f\n",a);
    system("pause");
    return 0;
}*/

/*
Ex.07)
#include <stdio.h>
#include <stdlib.h>
int main() {
    char c = 'a';
    c = getchar();
    putchar(c);
    putchar('\n');
    putchar(x);
    putchar('\n');
    system("pause");
    return 0;
}*/

/*
EX.08)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a = 5;
    int b = 7;
    printf("%d %d\n",b,a);
    system("pause");
    return 0;
}*/

/*
Ex.09)
#include <stdio.h>
#include <stdlib.h>
int main() {
    float x = 5.6, y = 7.8;
    printf("%.1f %.1f\n",y,x);
    system("pause");
    return 0;
}*/

/*
Ex.10)
#include <stdio.h>
#include <stdlib.h>
int main() {
    int dia,mes,ano;
    printf("Digite a data de hoje\n");
    scanf("%d/%m/%y/",&dia,&mes,&ano);
    system("pause");
    return 0;
}*/

/*
Ex.11)
#include <stdio.h>
#include <stdlib.h>
int main() {
    #define float 10.58
    printf("%.2f\n",float);
    system("pause");
    return 0;
}*/

/*
Ex.12)
#include <stdio.h>
#include <stdlib.h>
int main() {
    const int a = 10;
    printf("%d\n",a);
    system("pause");
    return 0;
}*/

/*
Ex.13)
#include <stdio.h>
#include <stdlib.h>
int main() {
    char letter = 'A';
    printf("O caractere digitado foi ,""%c"",\n", letter);
    system("pause");
    return 0;
}*/

/*
Ex.14)
#include <stdio.h>
#include <stdlib.h>
int main() {
    char a = 'A';
    char b = 'B';
    char c = 'C';
    printf("%c\n%c\n%c\n",a,b,c);
    system("pause");
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int num = 10;
    char  d = '/';
    float r = 2;
    printf("%d\b\n%c\t\n%.f\n",num,d,r);
    system("pause");
    return 0;
}
