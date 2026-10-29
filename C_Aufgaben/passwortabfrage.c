#include <stdio.h>
#include <string.h>
#define PASSWORT "maxine"

int main () {
     
    char pswd[10];

    for (int i = 0; i <= 2; i++) {

    printf("Passwort eingeben:");
    fgets(pswd, 10, stdin);

    pswd[strcspn(pswd, "\n")] = '\0';
    
    int counter = 1;
    
    if (strcmp(PASSWORT, pswd) == 0) {
        printf("Zugang gewährt\n");
        break;
    } 
    if (i == 1 || i == 2) {
        printf("Zugang gesperrt\n");
    } else {
        printf("Zugang gesperrt\n");
    }
    }
}
