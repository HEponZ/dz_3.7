#include "Fraction.h"

void Fraction::set_num(int numerator_S) //тело модификатора числителя
{
	numerator = numerator_S;
}

void Fraction::set_den(int denominator_S) // тело милификатора знаменателя
{
	if (denominator_S != 0) // условие на проверку не равен ли числитель нулю
	{
		denominator = denominator_S;
	}
	else
	{
		cout << "Ошибка, знаменатель не должен быть равен нулю!!!\n";
	}
}