#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	for (a; a <= b; ++a)
	{
		if (a % d == c)
		{
			cout << a << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}