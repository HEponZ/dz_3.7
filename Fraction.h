#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;
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

	int reduction()
	{
		int buf_num = numerator, buf_den = denominator;

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

	friend const Fraction operator+(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		num = fract.numerator * fract2.denominator + fract2.numerator * fract.denominator;
		den = fract.denominator * fract2.denominator;

		return Fraction(num, den);
	}
	friend const Fraction operator-(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		num = fract.numerator * fract2.denominator - fract2.numerator * fract.denominator;
		den = fract.denominator * fract2.denominator;

		return Fraction(num , den);
	}
	friend const Fraction operator*(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		num = fract.numerator * fract2.numerator;
		den = fract.denominator * fract2.denominator;

		return Fraction(num, den);
	}
	friend const Fraction operator/(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		num = fract.numerator * fract2.denominator;
		den = fract.denominator * fract2.numerator;

		return Fraction(num, den);
	}

	friend ostream& operator<< (ostream& my_cout, const Fraction& fract)
	{
		my_cout << fract.numerator << "/" << fract.denominator << "\n";

		return my_cout;
	}
	friend istream& operator>> (istream& my_cin, Fraction& fract)
	{
		cout << "¬ведите числитель: ";
		cin >> fract.numerator;
		cout << "¬ведите знаменатель: ";
		cin >> fract.denominator;

		return my_cin;
	}
};