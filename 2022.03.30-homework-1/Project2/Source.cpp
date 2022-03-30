#include <iostream>
#include <cmath>
#include "ComplexN.h"

using namespace std;

int main()
{
	ComplexN c1(1, 8), c0(1,8), c4(1,0);
	c1.print();
	double c = c1.module();
	ComplexN c2(32, 6);
	c2.print();
	ComplexN c3(2,4);
	c3 = c1/c2;
	c3.print();
	c2 = c1.power(2);
	c2.print();
	c4.root(2);
	c4 = c0 + 31;
	c4.print();
	return 0;
}