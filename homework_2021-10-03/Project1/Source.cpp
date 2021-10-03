#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int r = 0;
	r = 1;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		r = r * i;
	}
	cout << r << endl;
	return EXIT_SUCCESS;
}