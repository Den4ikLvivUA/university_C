/*#pragma once
#include <stdio.h> 
#include <math.h>

void second_function()
{
	float x, min, max, h, d;
	float y, suma;
	int k;
	printf("Введіть початок проміжку для другої функції, a: ");
	scanf_s("%F", &min);
	printf("Ви ввели - %.3F \n", min);

	printf("Тепер введіть кінець другого проміжку, аргумент b: ");
	scanf_s("%f", &max);
	printf("Ви ввели - %.3f \n", max);

	printf("Введіть крок для другої функції, h: ");
	scanf_s("%f", &h);
	printf("Ви ввели - %.3f \n", h);

	printf("Введіть похибку для другої функції, :d ");
	scanf_s("%f", &d);
	printf("Ви ввели - %.3f \n", d);

	for (x = min; x<max + 0.001; x = x + h)

	{
		k = 1; suma = 0;
		do
		{
			y = (pow((-1),k) * x) / (k*(k+1))*sin(2 * k + 1);
			suma = suma + y;
			k = k + 1;
		}
		while (y>d);
		printf("\n X = %lf \n Сума=%lf", x, suma);
	}
	printf("Для завершення роботи нажміть любу клавішу: \n");
}*/
