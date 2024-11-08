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

	cout << "1 - ����������\n2 - ����� ������\n3 - �������� ������\n4 - ������������ ������\n5 - ������� ������\n6 - �����\n0 - �����\n";

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
			cout << "����� ������: " << fraction + fraction2;
			break;
		case DIFF:
			cout << "�������� ������: " << fraction - fraction2;
			break;
		case COMPOS:
			cout << "������������ ������: " << fraction * fraction2;
			break;
		case DIVISION:
			cout << "������� ������: " << fraction / fraction2;
			break;
		case PRINT:
			cout << fraction;
			cout << fraction2;
			break;
		case EXIT:
			cout << "���, �� �������-�� �����, ��������!!!\n";
			break;
		}
	} while (number != 0);

	return 0;
}