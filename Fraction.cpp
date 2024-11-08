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
		cout << "Ошибка, знаменатель не должен быть равен нулю!!!\n";
	}
}

Fraction::Fraction(int numerator_S, int denominator_S)
{
	numerator = numerator_S;
	denominator = denominator_S; 
}