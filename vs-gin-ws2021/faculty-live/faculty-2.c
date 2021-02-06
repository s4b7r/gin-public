#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int fakultaet(int n) {
    // Fakultät: n! = n * (n-1)!
    /*if (n == 1) {
        return 1;
    }
    else {*/
    return (n * fakultaet(n - 1));
    //}
    // return n > 1 ? (n * fakultaet(n - 1)) : 1;
}


void main() {
    int ergebnis;

    // Eingabe
    // -> n
    int n;
    printf("Eingabe bitte: ");
    scanf("%d", &n);

    // Berechnung
    ergebnis = fakultaet(n);

    // Ausgabe
    printf("%d\n", ergebnis);

    system("pause");
}
