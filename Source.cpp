#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int numer, denom, number, NoD;
	Fraction fraction, fraction2, res_fract;

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
			res_fract = fraction + fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Сумма дробей: " << res_fract;
			break;
		case DIFF:
			res_fract = fraction - fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Разность дробей: " << res_fract;
			break;
		case COMPOS:
			res_fract = fraction * fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Произведение дробей: " << res_fract;
			break;
		case DIVISION:
			res_fract = fraction / fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Частное дробей: " << res_fract;
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