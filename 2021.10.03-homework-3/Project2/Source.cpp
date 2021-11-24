#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	int r = 0;
	cin >> n;
	r = 1;
	for (int i = 0; i < n; ++i)
	{
		r = r * 2;
	}
	cout << r << endl;
	return EXIT_SUCCESS;
}