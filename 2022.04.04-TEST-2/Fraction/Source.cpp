#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction fr1(3, 1);
	Fraction fr2(5, -2);
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << 1 / (3 * fr1 + 4 * fr2) << endl;
	cout << fr1.absF() << endl; //модуль числа
	cout << fr1.reverse() << endl; //обратное число
	cout << fr2.power(2) << endl;
	if (3 == fr1)
	{
		cout << '1';
	}
	else
	{
		cout << "2";
	}
	Fraction f4(-8, 32), f0 (16, -21);
	cout << endl << f0+f4 << endl;
	return 0;
}