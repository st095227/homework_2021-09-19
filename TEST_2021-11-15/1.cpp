#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;
	int m = 0;
	cin >> k;
	long long int* d = new long long int[k] {0};
	for (int i = 0; i < k; ++i)
	{
		cin >> n >> m;
		d[i] =(n + 239) * (n + 366) / 2;
		d[i] += 19 * m;
	}
	for (int i = 0; i < k; ++i)
	{
		cout << d[i] << endl;
	}
	delete[] d;
	return EXIT_SUCCESS;
}