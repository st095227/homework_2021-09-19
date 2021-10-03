#include <iostream>

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	long int nf = 1;
	long int knf = 1;
	long int r = 0;
	for (int i = k+1; i <= n; ++i)
	{
		nf = nf * i;
	}
	for (int i = 1; i <= (n-k); ++i)
	{
		knf = knf * i;
	}
	r = nf / knf;
	cout << r << endl;
	return EXIT_SUCCESS;
}