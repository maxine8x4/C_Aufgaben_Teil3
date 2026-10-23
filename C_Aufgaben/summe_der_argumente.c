#include <stdio.h>
#include <stdlib.h>

int summiere(int anzahl, char *werte[]) {
    
    int summe = 0;

    for (int i = 0; i < anzahl; i++) {
        summe += atoi(werte[i]);
    }

    return summe;
}

int main (int argc, char *argv[]) {

    printf("Summe: %d\n", summiere(argc - 1, argv + 1));

    return 0;
}