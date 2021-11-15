#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	if (a % b == 0 || b % a == 0)
	{
		cout << max(a, b) << endl;
	}
	else
	{
		int a1 = max(a, b);
		int b1 = min(a, b);
		int t = 0;
		while (!(a1 % b1 == 0))
		{
			t = a1 % b1;
			a1 = b1;
			b1 = t;
		}
		int nok = 0;
		nok = (a * b) / b1;
		cout << nok << endl;
	}
	return EXIT_SUCCESS;
}