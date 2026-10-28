#include <stdio.h>

int zaehle_zeichen(const char *s, char c) {

    int anzahl = 0;
    char i = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            anzahl++;
        }
    }

    return anzahl;
}

int zaehle_vokale(const char *s) {

    int anzahlVokale = 0;
    int i = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') {
            anzahlVokale++;
        }
    }
    return anzahlVokale;
}

int main () {

    char text [] = "Programmieren in C";

    int anzahl = zaehle_zeichen(text, 'r');
    zaehle_zeichen(text, 'r');
    printf("%c kommt %d mal vor\n", 'r', anzahl);

    int vokale = zaehle_vokale(text);
    zaehle_vokale(text);
    printf("Es gibt %d Vokale\n", vokale);

    return 0;
}