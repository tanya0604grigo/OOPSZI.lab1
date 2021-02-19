#include <iostream> 
#include "task8_func.h"

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



}
