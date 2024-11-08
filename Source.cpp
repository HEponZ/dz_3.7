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
			cout << "������� ������ ���������: ";
			cin >> numer;
			cout << "������� ������ �����������: ";
			cin >> denom;
			fraction.set_num(numer);
			fraction.set_den(denom);

			cout << "������� ������ ���������: ";
			cin >> numer;
			cout << "������� ������ �����������: ";
			cin >> denom;
			fraction2.set_num(numer);
			fraction2.set_den(denom);

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
			fraction.print();
			fraction2.print();
			break;
		case EXIT:
			cout << "���, �� �������-�� �����, ��������!!!\n";
			break;
		}
	} while (number != 0);

	return 0;
}