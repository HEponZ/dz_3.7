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
			res_fract = fraction + fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "����� ������: " << res_fract;
			break;
		case DIFF:
			res_fract = fraction - fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "�������� ������: " << res_fract;
			break;
		case COMPOS:
			res_fract = fraction * fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "������������ ������: " << res_fract;
			break;
		case DIVISION:
			res_fract = fraction / fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "������� ������: " << res_fract;
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