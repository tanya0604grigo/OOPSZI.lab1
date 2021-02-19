#include "task8_func.h"

double x = 2, result = 0;

void f(void) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
