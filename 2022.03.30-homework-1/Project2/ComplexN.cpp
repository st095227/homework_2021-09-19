#include "ComplexN.h"

using namespace std;


	ComplexN::ComplexN(double a, double b) : a(a), b(b) {}
	ComplexN::ComplexN(const ComplexN& complex) : a(complex.a), b(complex.b) {}
	ComplexN::~ComplexN()
	{
		this->a = 0;
		this->b = 0;
	}

	void ComplexN::setR(double a)
	{
		this->a = a;
	}
	double ComplexN::getR()
	{
		return this->a;
	}
	void ComplexN::setI(double b)
	{
		this->b = b;
	}
	double ComplexN::getI()
	{
		return this->b;
	}

	void ComplexN::print()
	{
		if (b > 0)
		{
			cout << this->a << "+" << this->b << "i" << endl;
		}
		else if (b < 0)
		{
			cout << this->a << this->b << "i" << endl;
		}
		else if (b == 0)
		{
			cout << this->a << endl;
		}
	}

	double ComplexN::module()
	{
		return sqrt(pow(this->a, 2) + pow(this->b, 2));
	}
	ComplexN ComplexN::conjugate()
	{
		return ComplexN(this->a, -this->b);
	}
	ComplexN ComplexN::reverse()
	{
		ComplexN c1(this->a/module(), -this->b/module());
		return c1;
	}

	ComplexN ComplexN::operator=(const ComplexN& complex)
	{
		this->a = complex.a;
		this->b = complex.b;
		return *this;
	}
	ComplexN ComplexN::operator+=(const ComplexN& complex)
	{
		this->a += complex.a;
		this->b += complex.b;
		return *this;
	}
	ComplexN ComplexN::operator-()
	{
		return ComplexN(-this->a, -this->b);
	}

	ComplexN ComplexN::operator+(const ComplexN& c1)
	{
		return ComplexN(this->a + c1.a, this->b + c1.b);
	}
	ComplexN operator+(const ComplexN& c1, const ComplexN& c2)
	{
		return ComplexN(c1.a + c2.a, c1.b + c2.b);
	}
	ComplexN operator+(double m, const ComplexN& c1)
	{
		return ComplexN(m + c1.a, c1.b);
	}
	/*ComplexN operator+(const ComplexN& c1, double m)
	{
		return ComplexN(c1.a + m, c1.b);
	}*/

	ComplexN ComplexN::operator-(const ComplexN& c1)
	{
		return ComplexN(this->a - c1.a, this->b - c1.b);
	}
	ComplexN operator-(const ComplexN& c1, const ComplexN& c2)
	{
		return ComplexN(c1.a - c2.a, c1.b - c2.b);
	}
	ComplexN operator-(double m, const ComplexN& c1)
	{
		return ComplexN(m - c1.a, c1.b);
	}
	ComplexN operator-(const ComplexN& c1, double m)
	{
		return ComplexN(c1.a - m, c1.b);
	}

	ComplexN operator*(double m, const ComplexN& c1)
	{
		return ComplexN(m * c1.a, m * c1.b);
	}
	ComplexN operator*(const ComplexN& c1, double m)
	{
		return ComplexN(c1.a * m, c1.b * m);
	}
	ComplexN operator*(const ComplexN& c1, const ComplexN& c2)
	{
		return ComplexN(c1.a * c2.a - c1.b * c2.b, c1.b * c2.a + c1.a * c2.b);
	}

	ComplexN operator/(const ComplexN& c1, double m)
	{
		return ComplexN(c1.a / m, c1.b / m);
	}
	ComplexN operator/(double m, const ComplexN& c1)
	{
		return ComplexN((m * c1.a) / (c1.a * c1.a + c1.b * c1.b), -m * c1.b / (c1.a * c1.a + c1.b * c1.b));
	}
	ComplexN operator/(const ComplexN& c1, const ComplexN& c2)
	{
		return ComplexN((c1.a * c2.a + c1.b * c2.b) / (c2.a * c2.a + c2.b * c2.b), (-c1.a * c2.b + c1.b * c2.a) / (c2.a * c2.a + c2.b * c2.b));
	}

	std::ostream& operator<<(std::ostream& stream, const ComplexN& c1)
	{
		if (c1.b == 1)
		{
			stream << c1.a << '+' << 'i';
			return stream;
		}
		else if (c1.b == -1)
		{
			stream << c1.a << '-' << 'i';
			return stream;
		}
		else if (c1.b > 0)
		{
			stream << c1.a << '+' << c1.b << 'i';
			return stream;
		}
		else if (c1.b < 0)
		{
			stream << c1.a << c1.b << 'i';
			return stream;
		}
	}

	ComplexN ComplexN::power(int m)
	{
		ComplexN cf(this->a, this->b);
		ComplexN c1 = cf;
		for (int i = 1; i < m; ++i)
		{
			cf = cf * c1;
		}
		return cf;
	}

	double ComplexN::arg()
	{
		double g = 0;
		if (this->a == 0 && this->b == 0)
		{
			cout << "the argument is not defined" << endl;
		}
		else
		{
			double pi = 3.14159265359;
			if (this->a >= 0 && this->b >= 0)
			{
				g = asin(this->b / module());
			}
			else if (this->a < 0 && this->b >= 0)
			{
				g = acos(this->a / module());
			}
			else if (this->a < 0 && this->b < 0)
			{
				g = asin(this->b / module()) + pi;
			}
			else if (this->a >= 0 && this->b < 0)
			{
				g = asin(this->b / module());
			}
		}
		return g;
	}

	void ComplexN::root(int m, std::ostream& stream)
	{
		if (this->a == 0 && this->b == 0)
		{
			ComplexN com(0, 0);
			cout << "root of " << m << ':' << endl;
			for (int i = 0; i < m; ++i)
			{
				com.print();
			}
		}
		else 
		{
			double pi = 3.14159265359;
			double g = arg();
			double d = pow(module(), (1 / m));
			cout << "root of " << m << ':' << endl;
			for (int i = 0; i < m; ++i)
			{
				ComplexN com(d * cos((g + pi * 2 * i) / m), d * sin((g + pi * 2 * i) / m));
				stream << com << endl;
			}
		}
	}

