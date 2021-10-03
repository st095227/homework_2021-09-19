#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	cin >> n;
	int k0 = 0;
	int k1 = 0;
	int km = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		cin >> a;
		if (a == 0)
		{
			++k0;
		}
		else if (a > 0)
		{
			++k1;
		}
		else
		{
			++km;
		}
	}
	cout << k0 << " " << k1 << " " << km << endl;
	return EXIT_SUCCESS;
}