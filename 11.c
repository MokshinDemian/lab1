#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(void) {
	setlocale(LC_ALL, ".UTF8");
	printf("*************************************************\n");
	printf("*            Курсовой проект                    *\n");
	printf("*   Дисциплина: Основы програмирования          *\n");
	printf("*         Тема: Обработка матрицы               *\n");
	printf("*   Выполнил: Мокшин Демьян Дмитриевич,бОТИ-262 *\n");
	printf("*************************************************\n");
	printf("\n Задача: Найти максимальный элемант матрицы и переставить строки и столбцы так, чтобы он показался в левом вехнем углу\n");
	printf("Выберите способ заполнения массива:\n");
	printf("1) Ввод рандом\n");
	printf("2) Ввод из файла\n");
	printf("3) Ручной ввод\n");
	int n, t, max;
	puts("Введите размеры масива\n");
	scanf_s("%d %d", &n, &t);
	int A[100][100];
	//Ввели масив
	puts("Введите члены массива");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			scanf_s("%d", &A[i][j]);
		}
	}
	max = A[0][0];
	int x, y;
	// Нашли максимум
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < t; j++) {
			if (A[i][j] > max) {
				max = A[i][j];
				x = i;
				y = j;
			}
		}
	}
	//строки
	for (int j = 0;j < t;j++) {
		int temp = A[0][j];
		A[0][j] = A[x][j];
		A[x][j] = temp;
	}
	//столбцы
	for (int i = 0; i < n; i++) {
		int temp = A[i][0];
		A[i][0] = A[i][y];
		A[i][y] = temp;
	}
	puts("Результат:");
	for (int i = 0;i < n;i++) {
		for (int j = 0; j < t; j++) {
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
}