#include <iostream> 

using namespace std;

extern double x; // поиск значения переменной из других файлов с помощью служебного слова extern
extern double result;
void f(void);

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "Введите значения х" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}


Task6_func.cpp

#include <iostream>

double x = 2, result = 0; // глобальные переменные

void f(void) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}

