
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

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
	if (y < x) return x;
	if (y > x) return y;
}
int get_min(int x, int y) {
	if (y < x) return y;
	if (y > x) return x;
}

void mean() {
	// A211 as base for A34
	//int number0, number1, number2, number3, number4;
	int number[100];
	int sum = 0;
	int mean_int;
	double mean_double;
	int min = INT_MAX;
	int max = INT_MIN;
	int count;

	printf("Wie viel? ");
	scanf("%d", &count);

	//
	for (int i = 0; i < count;i++) {
		printf("num %d: ", i);
		scanf("%d", &number[i]);
		/*if (i == 0) {
			min = number[i];
			max = number[i];
		}*/
		min = get_min(min, number[i]);
		max = get_max(max, number[i]);
		sum += number[i];
	}
	//
	/*
	int i = 0;
	while (i < count) {
		printf("num %d: ", i);
		scanf("%d", &number[i]);
		/*if (i == 0) {
			min = number[i];
			max = number[i];
		}//
		min = get_min(min, number[i]);
		max = get_max(max, number[i]);
		sum += number[i];
		i++;
	}
	*/
	mean_int = sum / count;
	mean_double = (double) sum / count;
	printf("mean: int %d, float %f\n", mean_int, mean_double);
	printf("min: %d, max: %d \n", min, max);
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
