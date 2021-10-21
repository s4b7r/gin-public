
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
int get_max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
int get_min(int x, int y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}
void mean() {
	// A211 as base for A34
	int number0, number1, number2, number3, number4;
	int sum = 0;
	int max, min;
	
	printf("num 0: ");
	scanf("%d", &number0);
	max = number0;
	min = number0;

	printf("num 1: ");
	scanf("%d", &number1);
	max = get_max(max, number1);
	min = get_min(min, number1);
	
	printf("num 2: ");
	scanf("%d", &number2);
	max = get_max(max, number2);
	min = get_min(min, number2);

	printf("num 3: ");
	scanf("%d", &number3);
	max = get_max(max, number3);
	min = get_min(min, number3);

	printf("num 4: ");
	scanf("%d", &number4);
	max = get_max(max, number4);
	min = get_min(min, number4);

	sum = number0 + number1+number2+number3+number4;
	printf("mean: int %d, float %f\n", sum / 5, (double)sum / 5);
	printf("min: %d, max: %d\n", min, max);
}
void mean2() {
	// A34 as base for A36
	int number[5];
	int sum = 0;
	int max, min;

	printf("num 0: ");
	scanf("%d", &number[0]);
	max = number[0];
	min = number[0];

	for (int i = 1; i < 5; i++) {
		printf("num %d: ", i);
		scanf("%d", &number[i]);
		max = get_max(max, number[i]);
		min = get_min(min, number[i]);
	}

	sum = number[0] + number[1] + number[2] + number[3] + number[4];
	printf("mean: int %d, float %f\n", sum / 5, (double)sum / 5);
	printf("min: %d, max: %d\n", min, max);
}
int main(int argc, char **argv) {
	int choice;
	printf("1*/\n");
	printf("2 cont.multiplication\n");
	printf("3 mean\n");
	printf("4 mean2\n");
	scanf("%d", &choice);
	if (choice == 1) binary_operators();
	else if (choice == 2) continuous_multiplication();
	else if (choice == 3) mean();
	else if (choice == 4) mean2();
	system("pause");
	return 0;
}
