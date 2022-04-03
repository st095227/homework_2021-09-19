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
	cout << z1.module() << endl; //������ �����
	cout << z2.arg() << endl;
	cout << z1.reverse() << endl; //�������� �����
	z1.root(5, cout); //����� � ����� cout ������� ������ ����� �������
	return 0;
}