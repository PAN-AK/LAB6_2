#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	//1ZADANIE
	printf("������� ���:");
	scanf("%d", &yeas);
	if ((yeas % 4 == 00) && (yeas % 100 != 0) || (yeas % 400 == 0))
		printf("\n��� %d ����������", yeas);

	else
		printf("\n��� %d �� ����������", yeas);


	//2ZADANIE
	double x;
	printf("\n������� �:");
	scanf("%lf", &x);
	if (x >= 8)
		printf("F(x) = %lf", (x - pow(x, 2) - 9));
	else
		printf("F(x) = %lf", (1 / (pow(x, 4) - 6)));

// DZ
	int sot, des, ed, n;
	printf("\n������� ����� �� 1 �� 999 ������������");
	scanf("%d", &n);
	sot = n / 100;
	des = n / 10 % 10;
	ed = n % 10;
	if (100 <= (sot * des * ed))
		printf("\n��������");
	else
		printf("\n�� �������");


}