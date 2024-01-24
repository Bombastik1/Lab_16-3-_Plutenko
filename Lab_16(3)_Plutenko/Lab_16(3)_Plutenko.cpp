#include <stdio.h>
#include <locale>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "");
	int i, j, k;
	int a[4][10];

	do {
		printf("Введiть k, при 1 < k < 11 = ");
		scanf_s("%d", &k);
		if (k <= 1 || k >= 11)
			printf("k <= 1 або k >= 11\n");
	} while (k <= 1 || k >= 11);

	printf("Початкова матриця:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j] = rand() % 21 - 10;
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}


	int s = 0;
	int d = 1;
	for (i = 0; i < 4; i++) {
		s += a[i][k - 1];
		d *= a[i][k - 1];
	}

	printf("Сума елементiв %d-го стовпця: %d\n", k, s);
	printf("Добуток елементiв %d-го стовпця: %d\n", k, d);

	return 0;
}