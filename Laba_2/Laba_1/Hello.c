#include <stdio.h> 
#include <math.h>
#include "first.h"
#include "second.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("����� �������� ������ ����������� ��������� �� ��������(��������� ����)\n");
	printf("�� �������� ��������� ����� ������ !!! \n");
	first_function();
	second_function();
	
	_getch();
	return 0;
}
