#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int numer, denom, number;
	Fraction fraction, fraction2;

	enum MENU {
		EXIT = 0,
		FILL,
		SUM,
		DIFF,
		COMPOS,
		DIVISION,
		PRINT
	};

	cout << "1 - заполнение\n2 - сумма дробей\n3 - разность дробей\n4 - произведение дробей\n5 - частное дробей\n6 - вывод\n0 - ВЫХОД\n";

	do
	{
		cin >> number;

		switch (number)
		{
		case FILL:
			cin >> fraction;
			cin >> fraction2;
			break;
		case SUM:
			cout << "Сумма дробей: " << fraction + fraction2;
			break;
		case DIFF:
			cout << "Разность дробей: " << fraction - fraction2;
			break;
		case COMPOS:
			cout << "Произведение дробей: " << fraction * fraction2;
			break;
		case DIVISION:
			cout << "Частное дробей: " << fraction / fraction2;
			break;
		case PRINT:
			cout << fraction;
			cout << fraction2;
			break;
		case EXIT:
			cout << "Ура, вы наконец-то вышли, прощайте!!!\n";
			break;
		}
	} while (number != 0);

	return 0;
}