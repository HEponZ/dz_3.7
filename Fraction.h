#pragma once
#include <iostream>

using namespace std;

class Fraction {
private:
	// создание переменных
	int numerator;
	int denominator;
public:
	//аксессоры
	int get_num()
	{
		return numerator;
	}
	int get_den()
	{
		return denominator;
	}

	//модификаторы
	void set_num(int numerator_S);
	void set_den(int denominator_S);

	//конструкторы с делегированием
	Fraction() : Fraction(1, 1) {};
	Fraction(int numerator_S, int denominator_S) : numerator{numerator_S}, denominator{denominator_S}{}

	//функция для вычисления нод
	int reduction()
	{
		//создание и инициализация буферов
		int buf_num = numerator, buf_den = denominator; 

		while (buf_num != buf_den) //цикл на условии если числ не равен занм цикл продолжается
		{
			if (buf_num > buf_den)//условие числитель больше знаменателя
			{
				//тогда числитель равен числ минус знам
				buf_num = buf_num - buf_den; 
			}
			else
			{
				//знам равен знам минус числ
				buf_den = buf_den - buf_num;
			}
		}

		//возврат нод
		return buf_den;
	}

	//перегрузка оператора + для сложения двух объктов дробей
	friend const Fraction operator+(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;//создание переменных

		//вычисление числителя
		num = fract.numerator * fract2.denominator + fract2.numerator * fract.denominator;
		//вычисление знаменателя
		den = fract.denominator * fract2.denominator;

		return Fraction(num, den);
	}
	//перегрузка оператора - для вычитания двух объктов дробей
	friend const Fraction operator-(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		//вычисление числителя
		num = fract.numerator * fract2.denominator - fract2.numerator * fract.denominator;
		//вычисление знаменателя
		den = fract.denominator * fract2.denominator;

		return Fraction(num , den);
	}
	//перегрузка оператора * для умножения двух объктов дробей
	friend const Fraction operator*(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		//вычисление числителя
		num = fract.numerator * fract2.numerator;
		//вычисление знаменателя
		den = fract.denominator * fract2.denominator;

		return Fraction(num, den);
	}
	//перегрузка оператора / для деления двух объктов дробей
	friend const Fraction operator/(const Fraction& fract, const Fraction& fract2)
	{
		int den, num;

		//вычисление числителя
		num = fract.numerator * fract2.denominator;
		//вычисление знаменателя
		den = fract.denominator * fract2.numerator;

		return Fraction(num, den);
	}

	//перегрузка вывода
	friend ostream& operator<< (ostream& my_cout, const Fraction& fract)
	{
		my_cout << fract.numerator << "/" << fract.denominator << "\n";

		return my_cout;
	}
	//перегрузка ввода
	friend istream& operator>> (istream& my_cin, Fraction& fract)
	{
		cout << "Введите числитель: ";
		cin >> fract.numerator;
		cout << "Введите знаменатель: ";
		cin >> fract.denominator;

		return my_cin;
	}
};