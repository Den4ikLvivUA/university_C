#pragma once
#include <stdio.h> 
#include <math.h>

void first_function()
{
	float result, b, a, x, h;
	printf("������ ������� ������� ��� ����� �������, a: ");
	scanf_s("%F", &a);
	printf("�� ����� - %.3F \n", a);

	printf("����� ������ ����� ������� �������, �������� b: ");
	scanf_s("%f", &b);
	printf("�� ����� - %.3f \n", b);

	printf("������ ���� ��� ����� �������, h: ");
	scanf_s("%f", &h);
	printf("�� ����� - %.3f \n", h);
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
		printf("�������� �������:");
		printf("%.3f", result);
		printf("\n");
	} while (x < b);
	printf_s("������ ���� ������ ��� �������� �� ����� �������: \n");
	_getch();
	system("CLS");
}