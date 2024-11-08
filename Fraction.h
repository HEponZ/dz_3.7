#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;

	int reduction(int& num, int& den)
	{
		int buf_num = num, buf_den = den;

		while (buf_num != buf_den)
		{
			if (buf_num > buf_den)
			{
				buf_num = buf_num - buf_den;
			}
			else
			{
				buf_den = buf_den - buf_num;
			}
		}

		return buf_den;
	}
public:
	int get_num()
	{
		return numerator;
	}
	int get_den()
	{
		return denominator;
	}


	void set_num(int numerator_S);
	void set_den(int denominator_S);

	Fraction()
	{
		numerator = 1;
		denominator = 1;
	}
	Fraction(int numerator_S, int denominator_S);

	void sum(int num2, int den2);
	void diff(int num2, int den2);
	void compos(int num2, int den2);
	void division(int num2, int den2);

	void print()
	{
		printf("%d/%d\n", numerator, denominator);
	}

	friend const Fraction operator+(const Fraction& fract, const Fraction& fract2)
	{
		int den, num, NoD, buf_num, buf_den;

		num = fract.numerator * fract2.denominator + fract2.numerator * fract.denominator;
		den = fract.denominator * fract2.denominator;

		buf_num = num;
		buf_den = den;

		while (buf_num != buf_den)
		{
			if (buf_num > buf_den)
			{
				buf_num = buf_num - buf_den;
			}
			else
			{
				buf_den = buf_den - buf_num;
			}
		}

		return Fraction(num / buf_den, den / buf_den);
	}
	friend const Fraction operator-(const Fraction& fract, const Fraction& fract2)
	{
		int den, num, NoD, buf_num, buf_den;

		num = fract.numerator * fract2.denominator - fract2.numerator * fract.denominator;
		den = fract.denominator * fract2.denominator;

		buf_num = num;
		buf_den = den;

		while (buf_num != buf_den)
		{
			if (buf_num > buf_den)
			{
				buf_num = buf_num - buf_den;
			}
			else
			{
				buf_den = buf_den - buf_num;
			}
		}

		return Fraction(num / buf_den, den / buf_den);
	}
	friend const Fraction operator*(const Fraction& fract, const Fraction& fract2)
	{
		int den, num, NoD, buf_num, buf_den;

		num = fract.numerator * fract2.numerator;
		den = fract.denominator * fract2.denominator;

		buf_num = num;
		buf_den = den;

		while (buf_num != buf_den)
		{
			if (buf_num > buf_den)
			{
				buf_num = buf_num - buf_den;
			}
			else
			{
				buf_den = buf_den - buf_num;
			}
		}

		return Fraction(num / buf_den, den / buf_den);
	}
	friend const Fraction operator/(const Fraction& fract, const Fraction& fract2)
	{
		int den, num, NoD, buf_num, buf_den;

		num = fract.numerator * fract2.denominator;
		den = fract.denominator * fract2.numerator;

		buf_num = num;
		buf_den = den;

		while (buf_num != buf_den)
		{
			if (buf_num > buf_den)
			{
				buf_num = buf_num - buf_den;
			}
			else
			{
				buf_den = buf_den - buf_num;
			}
		}

		return Fraction(num / buf_den, den / buf_den);
	}

	friend ostream& operator<<(ostream& my_cout, const Fraction& fract)
	{
		my_cout << fract.numerator << "/" << fract.denominator << "\n";

		return my_cout;
	}
};