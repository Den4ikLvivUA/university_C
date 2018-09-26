#pragma once
#include <stdio.h> 
#include <math.h>

void first_function()
{
	float result, b, a, x, h;
	printf("Введіть початок проміжку для першої функції, a: ");
	scanf_s("%F", &a);
	printf("Ви ввели - %.3F \n", a);

	printf("Тепер введіть кінець першого проміжку, аргумент b: ");
	scanf_s("%f", &b);
	printf("Ви ввели - %.3f \n", b);

	printf("Введіть крок для першої функції, h: ");
	scanf_s("%f", &h);
	printf("Ви ввели - %.3f \n", h);
	x = a;
	do {
		if (x < 0.6)
		{
			result = exp(x - sin(x));
		}
		else if (0.6 <= x < 0.7)
		{
			result = tan(abs(log10(x)));
		}
		else if (x >= 0.7)
		{
			result = atan(pow(x, 7));
		}
		x = x + h;
		printf("Значення функції:");
		printf("%.3f", result);
		printf("\n");
	} while (x < b);
	printf_s("Нажміть любу клавішу для переходу до другої функції: \n");
	_getch();
	system("CLS");
}