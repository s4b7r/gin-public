
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int divide(int x, int y) {
	return x / y;
}
int multiply(int x, int y) {
	return x * y;
}

void binary_operators() {
	int x, y;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	int choice;
	printf("1*, 2/\n");
	scanf("%d", &choice);
	int result;
	if (choice == 1) result = multiply(x, y);
	else if (choice == 2) result = divide(x, y);
	printf("%d\n", result);

}
void continuous_multiplication() {
	int product, choice = 1;
	for (product = 1; choice != 0; product *= choice != 0 ? choice : 1) {
		printf("Continous input: ");
		scanf("%d", &choice);
	}
	printf("%d\n", product);
}
void mean() {
	// A211 as base for A34
	int number0, number1, number2, number3, number4;
	int sum = 0;
	printf("num 0: ");
	scanf("%d", &number0);
	printf("num 1: ");
	scanf("%d", &number1);
	printf("num 2: ");
	scanf("%d", &number2);
	printf("num 3: ");
	scanf("%d", &number3);
	printf("num 4: ");
	scanf("%d", &number4);
	sum = number0 + number1+number2+number3+number4;
	printf("mean: int %d, float %f\n", sum / 5, (double)sum / 5);
}
int main(int argc, char **argv) {
	int choice;
	printf("1*/\n");
	printf("2 cont.multiplication\n");
	printf("3 mean\n");
	scanf("%d", &choice);
	if (choice == 1) binary_operators();
	else if (choice == 2) continuous_multiplication();
	else if (choice == 3) mean();
	system("pause");
	return 0;
}