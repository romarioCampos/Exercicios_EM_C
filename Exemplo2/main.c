#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    strftime(texto,80,"Hora atual %I:%M%p.",infotempo);
    puts(tempo);
    strftime(texto,80,"Data: %A, %d/%b/%y",infotempo);
    puts(texto);
    system("pause");
    return 0;
}
