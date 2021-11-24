#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int a = 0;
	cin >> a;
	for (int i = 1; i <= (a / 2); ++i)
	{
		if (a % i == 0)
		{
			cout << i << ' ';
		}
	}
	cout << a << endl;
	return EXIT_SUCCESS;
}