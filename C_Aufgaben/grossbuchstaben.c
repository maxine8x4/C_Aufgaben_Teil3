#include <stdio.h>
#include <ctype.h>

void zu_grossbuchstaben(char *s) {

    char text[] = "Hallo Welt";
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }
}

int main () {
    
    char text[] = "Hallo Welt";

    zu_grossbuchstaben(text);
    printf("%s\n", text);

    return 0;
}