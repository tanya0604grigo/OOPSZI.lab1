#include <iostream> 

using namespace std;

double x = 2, result = 0;

void f(void); // Объявление "головы" функции. Заметить, что тип void, т.к. нам ничего возвращать не нужно
// потому что,  мы работаем с глобальными переменными

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "Введите значение х" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}

void f(void) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}
