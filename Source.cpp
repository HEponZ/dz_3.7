#include "Fraction.h"

int main()
{
	setlocale(LC_ALL, "rus");

	int numer, denom, number, NoD; //создание переменных
	Fraction fraction, fraction2, res_fract; //создание объектов класса

	enum MENU { //енам меню
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
			cin >> fraction; //ввод обьектов класса дробь
			cin >> fraction2;
			break;
		case SUM:
			//присваивание 3 обьекту результат сложения обьектов - дробей
			res_fract = fraction + fraction2;
			// вычисление нод - общий делитель для сокращения дробей
			NoD = res_fract.reduction();
			// сокращение знаменателя и числителя
			res_fract.set_num(res_fract.get_num() / NoD); 
			res_fract.set_den(res_fract.get_den() / NoD);
			// вывод
			cout << "Сумма дробей: " << res_fract;
			break;
		case DIFF:
			//присваивание 3 обьекту результат вычитания обьектов - дробей
			res_fract = fraction - fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Разность дробей: " << res_fract;
			break;
		case COMPOS:
			//присваивание 3 обьекту результат умножения обьектов - дробей
			res_fract = fraction * fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Произведение дробей: " << res_fract;
			break;
		case DIVISION:
			//присваивание 3 обьекту результат деления обьектов - дробей
			res_fract = fraction / fraction2;
			NoD = res_fract.reduction();
			res_fract.set_num(res_fract.get_num() / NoD);
			res_fract.set_den(res_fract.get_den() / NoD);
			cout << "Частное дробей: " << res_fract;
			break;
		case PRINT:
			// вывод дробей
			cout << fraction;
			cout << fraction2;
			break;
		case EXIT:
			// выход
			cout << "Ура, вы наконец-то вышли, прощайте!!!\n";
			break;
		}
	} while (number != 0);

	return 0;
}