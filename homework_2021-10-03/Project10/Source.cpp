#include <iostream>
#include <cmath>

using namespace std;

int main(int argv, char* argc[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	for (a; a <= b; ++a)
	{
		if (sqrt(a) == trunc(sqrt(a)))
		{
			cout << a << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}