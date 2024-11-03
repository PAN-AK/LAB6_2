#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	//1ZADANIE
	printf("Введите год:");
	scanf("%d", &yeas);
	if ((yeas % 4 == 00) && (yeas % 100 != 0) || (yeas % 400 == 0))
		printf("\nГод %d високосный", yeas);

	else
		printf("\nГод %d не високосный", yeas);


	//2ZADANIE
	double x;
	printf("\nВведите х:");
	scanf("%lf", &x);
	if (x >= 8)
		printf("F(x) = %lf", (x - pow(x, 2) - 9));
	else
		printf("F(x) = %lf", (1 / (pow(x, 4) - 6)));

// DZ
	int sot, des, ed, n;
	printf("\nВведите число от 1 до 999 включительно");
	scanf("%d", &n);
	sot = n / 100;
	des = n / 10 % 10;
	ed = n % 10;
	if (100 <= (sot * des * ed))
		printf("\nЯвляется");
	else
		printf("\nНе являеся");


}