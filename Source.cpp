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
			cout << "Введите первый числитель: ";
			cin >> numer;
			cout << "Введите первый знаменатель: ";
			cin >> denom;
			fraction.set_num(numer);
			fraction.set_den(denom);

			cout << "Введите второй числитель: ";
			cin >> numer;
			cout << "Введите второй знаменатель: ";
			cin >> denom;
			fraction2.set_num(numer);
			fraction2.set_den(denom);

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
			fraction.print();
			fraction2.print();
			break;
		case EXIT:
			cout << "Ура, вы наконец-то вышли, прощайте!!!\n";
			break;
		}
	} while (number != 0);

	return 0;
}