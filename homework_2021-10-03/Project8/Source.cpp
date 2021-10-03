#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = 0;
		cin >> a;
		sum += a;
	}
	cout << sum << endl;
	return EXIT_SUCCESS;
}