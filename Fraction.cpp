#include "Fraction.h"

void Fraction::set_num(int numerator_S)
{
	numerator = numerator_S;
}

void Fraction::set_den(int denominator_S)
{
	if (denominator_S != 0)
	{
		denominator = denominator_S;
	}
	else
	{
		cout << "������, ����������� �� ������ ���� ����� ����!!!\n";
	}
}

Fraction::Fraction(int numerator_S, int denominator_S)
{
	numerator = numerator_S;
	denominator = denominator_S; 
}

void Fraction::sum(int num2, int den2)
{
	int num, den, NoD; //num - ��������� den - �����������

	den = denominator * den2;
	num = numerator * den2 + num2 * denominator;

	NoD = reduction(num, den);

	printf("����� ������: %d/%d\n", num / NoD, den / NoD);
}

void Fraction::diff(int num2, int den2)
{
	int num, den, NoD;

	den = denominator * den2;
	num = numerator * den2 - num2 * denominator;

	NoD = reduction(num, den);

	printf("�������� ������: %d/%d\n", num / NoD, den / NoD);
}

void Fraction::compos(int num2, int den2)
{
	int num, den, NoD;

	den = denominator * den2;
	num = numerator * num2;

	NoD = reduction(num, den);

	printf("������������ ������: %d/%d\n", num / NoD, den / NoD);
}

void Fraction::division(int num2, int den2)
{
	int num, den, NoD;

	den = denominator * num2;
	num = numerator * den2;

	NoD = reduction(num, den);

	printf("������� ������: %d/%d\n", num / NoD, den / NoD);
}