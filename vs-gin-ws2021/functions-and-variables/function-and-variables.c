#include <stdio.h>

void some() {
    //int x; // 3. einkommentieren
    //printf("some 1 x %d", x); // 3. einkommentieren
    printf("some");
    //x = 2; // 4. einkommentieren
    //printf("some 1 x %d", x); // 3. einkommentieren
}

void a(int x) {
    //printf("a 1 x %d", x); // 5. einkommentieren
    //x = 7; // 7. einkommentieren
    //printf("a 2 x %d", x); // 7. einkommentieren
}

int b(int x) {
    printf("b 1 x %d", x);
    x = 9;
    printf("b 1 x %d", x);
    return 15;
}

void main() {
    int x = 0;
    printf("main 1 x %d", x);
    //some(); // 1. einkommentieren, 2. auskommentieren
    x = 1;
    printf("main 2 x %d", x);
    //some(); // 2. einkommentieren
    //printf("main 3 x %d", x); // 3. einkommentieren
    //a(5); // 5. einkommentieren, 6. auskommentieren
    //a(x); // 6. einkommentieren
    //printf("main 4 x %d", x); // 5. einkommentieren
    //b(1); // 8. einkommentieren
    //printf("main 5 x %d", x); // 8. einkommentieren
    //x = b(1); // 9. einkommentieren, 10. auskommentieren
    //x = b(x); // 10. einkommentieren
    //printf("main 5 x %d", x); // 9. einkommentieren
}
