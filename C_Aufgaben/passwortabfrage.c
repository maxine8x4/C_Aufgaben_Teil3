#include <stdio.h>
#include <string.h>
#define PASSWORT "maxine"

int main () {
     
    char pswd[10];

    printf("Passwort eingeben:");
    fgets(pswd, 10, stdin);

    pswd[strcspn(pswd, "\n")] = '\0';
    
    if (strcmp(PASSWORT, pswd) == 0)
        printf("Zugang gewährt\n");
    else
        printf("Zugang gesperrt");

}

// Abfrage 3x wiederholen bei falscher Eingabe