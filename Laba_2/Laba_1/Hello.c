#include <stdio.h> 
#include <math.h>
#include "first.h"
#include "second.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Перед початком роботи переключіть розкладку на латиницю(англійську мову)\n");
	printf("Усі значення вводяться через крапку !!! \n");
	first_function();
	second_function();
	
	_getch();
	return 0;
}
