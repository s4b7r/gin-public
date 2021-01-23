#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fakultat(int eingabe) {
    int ergebnis = 1;
    for (; eingabe > 1; eingabe--) {
        ergebnis *= eingabe;
        printf("%d %d \n", eingabe, ergebnis);
    }
    return ergebnis;
}

int main() {
    int eingabe, ergebnis = 1;
    scanf("%d", &eingabe);
    ergebnis = fakultat(eingabe);
    printf("%d", ergebnis);
    system("pause");
    return 0;
}//

/*int main() {
    printf("%d", fakultat(5)); // == 120
    printf("%d", fakultat(4)); // 24
    printf("%d", fakultat(3)); // 6
    system("pause");
}*/