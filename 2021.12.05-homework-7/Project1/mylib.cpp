#include"mylib.h"
#include<iostream>

using namespace std;

int f(int n, int k)
{
	if (n <= 1)
	{
		return k;
	}
	else if (n % 2 == 0)
	{
		return f(n / 2, ++k);
	}
	else
	{
		return f(3 * n + 1, ++k);
	}
}

void circle(int r)
{
	if (r == 0)
	{
		cout << "*";
	}
	else 
	{
		for (int i = 0; i <= 2 * r; ++i)
		{
			int j = 0;

			while ((i - r) * (i - r) + (j - r) * (j - r) > (r * r))
			{
				++j;
				cout << " ";
			}
			cout << "*";

			while ((i - r) * (i - r) + (j - r) * (j - r) <= (r * r))
			{
				++j;
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
}
