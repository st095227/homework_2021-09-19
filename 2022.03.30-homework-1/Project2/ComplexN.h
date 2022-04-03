#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class ComplexN
{
private:
	double a;
	double b;

public:
	ComplexN(double a = 0, double b = 0);
	ComplexN(const ComplexN& complex);
	~ComplexN();

		void setR(double a);
		double getR();
		void setI(double b);
		double getI();

		void print();
	
		double module();
		ComplexN conjugate();
		ComplexN reverse();

		ComplexN operator=(const ComplexN& complex);
	
		ComplexN operator+=(const ComplexN& complex);
	
		ComplexN operator-();
	

		ComplexN operator+(const ComplexN& c1);
		friend ComplexN operator+(const ComplexN& c1, const ComplexN& c2);
		friend ComplexN operator+(double m, const ComplexN& c1);
		//friend ComplexN operator+(const ComplexN& c1, double m);

		ComplexN operator-(const ComplexN& c1);
		friend ComplexN operator-(const ComplexN& c1, const ComplexN& c2);
		friend ComplexN operator-(double m, const ComplexN& c1);
		friend ComplexN operator-(const ComplexN& c1, double m);

		friend ComplexN operator*(double m, const ComplexN& c1);
		friend ComplexN operator*(const ComplexN& c1, double m);
		friend ComplexN operator*(const ComplexN& c1, const ComplexN& c2);

		friend ComplexN operator/(const ComplexN& c1, double m);
		friend ComplexN operator/(double m, const ComplexN& c1);
		friend ComplexN operator/(const ComplexN& c1, const ComplexN& c2);
		friend std::ostream& operator<<(std::ostream& stream, const ComplexN& c1);

		ComplexN power(int m);
		double arg();
		void root(int m, std::ostream& stream);
};
