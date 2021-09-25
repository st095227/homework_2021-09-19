#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> n >> m;
	if (n <= k)
	{
		cout << (2 * m) << endl;
	}
	else if (2*n % k == 0)
	{
		cout << (2 * n / k) * m << endl;
	}
	else 
	{
		cout << ((2 * n / k) + 1) * m << endl;
	}
	return EXIT_SUCCESS;
}