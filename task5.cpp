#include <iostream>

using namespace std;

double f(double x); // Объявление "головы" функции

void main()
{
	setlocale(LC_ALL, "Rus");

	double x = 2;

	cout << "x= " << x << "; f= " << f(x) << "\n";

	cout << "Введите значение х" << "\n";
	cin >> x;
	cout << "x= " << x << "; f= " << f(x);
}

Task5_main.cpp

#include <iostream> // подключаем библиотеку для реализации функции косинуса

double f(double x) {
	return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}
