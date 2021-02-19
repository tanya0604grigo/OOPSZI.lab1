#include <iostream>  // библиотека для вывода

using namespace std; // простанство имён для вывода

void main() // главная вызывающая функция
{
	setlocale(LC_ALL, "Rus"); // для чтения русских символов

	double x = 2; //2.00000 - точное число.

	double f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x); // func
	cout << "x= " << x << "; f= " << f << "\n"; // вывод. "\n" - переход на новую строку

	cout << "Введите значение х" << "\n";
	cin >> x; // ввод из консоли
	f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x); // func
	cout << "x= " << x << "; f= " << f;

}
