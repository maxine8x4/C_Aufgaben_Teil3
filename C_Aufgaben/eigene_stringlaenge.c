#include <stdio.h>
#include <string.h>

size_t meine_strlen(const char *s) {
    size_t i = 0;

    for (i = 0; s[i] != '\0'; i++ ) 
    return i;
}

int main () {
    char text[] = "hallo";
    printf("Länge %zu\n", meine_strlen(text));
    printf("Länge %zu\n", strlen(text));

    return 0;
}