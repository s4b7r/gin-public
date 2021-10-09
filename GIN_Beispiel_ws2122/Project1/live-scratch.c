#include <stdio.h>

float mean1(float z1, float z2, float z3, float z4, float z5) {
	float Ergebnis, ergebnis;
	Ergebnis = (z1 + z2 + z3 + z4 + z5) / 5;
	ergebnis = Ergebnis;
	return ergebnis;
}

/*
float mean2(float z1, float z2, float z3, float z4, float z5) {
	return ((z1 + z2 + z3 + z4 + z5) / 5);
}
*/

void Mittelwert()
{
	double n1;
	double n2;
	double n3;
	double n4;
	double n5;
	double n6;
	double n7;

	printf("Geben Sie eine Zahl ein");
	scanf_s("%lf", &n1);
	printf("Geben Sie eine Zahl ein");
	scanf_s("%lf", &n2);
	printf("Geben Sie eine Zahl ein");
	scanf_s("%lf", &n3);
	printf("Geben Sie eine Zahl ein");
	scanf_s("%lf", &n4);
	printf("Geben Sie eine Zahl ein");
	scanf_s("%lf", &n5);

	n6 = n1 + n2 + n3 + n4 + n5;

	n7 = n6 / 5;


	printf("%.2f\n", n7);
	printf("%.*f", 1, n7);

}

main() {
	//float z1 = 3, z2 = 3, z3 = 3, z4 = 3, z5 = 4;
	//printf("1: %f\n", mean1(z1, z2, z3, z4, z5));
	Mittelwert();
	//printf("2: %f\n", mean2(z1, z2, z3, z4, z5));
	system("pause");
}
