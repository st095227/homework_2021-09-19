#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	for (int i = a; i <= b; ++i)
	{
		if (i % d == c)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}