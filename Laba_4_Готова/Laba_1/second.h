/*#pragma once
#include <stdio.h> 
#include <math.h>

void second_function()
{
	float x, min, max, h, d;
	float y, suma;
	int k;
	printf("������ ������� ������� ��� ����� �������, a: ");
	scanf_s("%F", &min);
	printf("�� ����� - %.3F \n", min);

	printf("����� ������ ����� ������� �������, �������� b: ");
	scanf_s("%f", &max);
	printf("�� ����� - %.3f \n", max);

	printf("������ ���� ��� ����� �������, h: ");
	scanf_s("%f", &h);
	printf("�� ����� - %.3f \n", h);

	printf("������ ������� ��� ����� �������, :d ");
	scanf_s("%f", &d);
	printf("�� ����� - %.3f \n", d);

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
		printf("\n X = %lf \n ����=%lf", x, suma);
	}
	printf("��� ���������� ������ ������ ���� ������: \n");
}*/
