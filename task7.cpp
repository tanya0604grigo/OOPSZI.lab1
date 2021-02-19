#include <iostream> 
#include "task7_func.h" // указание на голову

using namespace std;

extern double x;
extern double result;

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "По очереди введите значения х" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}

Task7_func.cpp

#include "task7_func.h" // подключаем голову к туловищу

double x = 2, result = 0;

void f(void) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}

Task7_func.h

#pragma once // исключает повторное включение кода

#include <iostream>

void f(void); // обозначаем голову

