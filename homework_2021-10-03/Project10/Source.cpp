#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	for (int i = 0; i * i <= b; ++i)
	{
		if (i * i >= a)
		{
			cout << i * i << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}