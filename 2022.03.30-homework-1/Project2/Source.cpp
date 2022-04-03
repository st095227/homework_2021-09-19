#include <iostream>
#include <cmath>
#include "ComplexN.h"

using namespace std;

int main()
{
	ComplexN z1(3, 1);
	ComplexN z2(5, -2);
	cout << z1 * z2 << endl;
	cout << z1 / z2 << endl;
	cout << 3 * z1 + 4 * z2 << endl;
	cout << z1.module() << endl; //модуль числа
	cout << z2.arg() << endl;
	cout << z1.reverse() << endl; //обратное число
	z1.root(5, cout); //вывод в поток cout формулы корней пятой степени
	return 0;
}