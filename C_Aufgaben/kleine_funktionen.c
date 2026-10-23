#include <stdio.h>

int maximum(int a, int b) {
  if (a > b) {
    return a;
  } else if (b > a) {
    return b;
  } else {
    return b;
  }
}

int ist_gerade(int x) {
  if (x % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int summe_bis(int n) {
    int summe = 0;

    for (int i = 1; i <= n; i++) {
        summe += i;
    }

    return summe;
}

int main() {

  int ergebnis = maximum(3, 7);
  printf("Die groessere Zahl ist: %d\n", ergebnis);

  ergebnis = maximum(15, 8);
  printf("Die groessere Zahl ist: %d\n", ergebnis);

  ergebnis = maximum(5, 5);
  printf("Die groessere Zahl ist: %d\n", ergebnis);

  int zahlen[] = {8, 7, 12};

  for (int i = 0; i < 3; i++) {
    ergebnis = ist_gerade(zahlen[i]);

    if (ergebnis == 1) {
      printf("%d ist gerade\n", zahlen[i]);
    } else {
      printf("%d ist ungerade\n", zahlen[i]);
    }
  }

  ergebnis = summe_bis(5);
  printf("Summe bis 5: %d\n", ergebnis);

  ergebnis = summe_bis(10);
  printf("Summe bis 10: %d\n", ergebnis);

  ergebnis = summe_bis(0);
  printf("Summe bis 0: %d\n", ergebnis);

  return 0;
}