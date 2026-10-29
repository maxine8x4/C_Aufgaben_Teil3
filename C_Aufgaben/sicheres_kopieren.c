#include <stdio.h>

void sicher_kopieren(char *ziel, size_t groesse, const char *quelle) {

    if (groesse == 0) {
        return;
    }
    int i = 0;
    for (i = 0; i < groesse -1 && quelle[i] != '\0'; i++) {
        ziel[i] = quelle[i];
    }
    ziel[i] = '\0';
}

int main () {

    char ziel[8];

    sicher_kopieren(ziel, 8, "hello");

    printf("[%s]\n", ziel);

    return 0;
}