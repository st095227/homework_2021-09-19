#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	cin >> n;
	int i = 0;
	int b = 0;
	while (n != 0)
	{
		++i;
		for (int j = 0; j < i && n>0; ++j)
		{
			++b;
			cout << b << ' ';
			--n;
		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}