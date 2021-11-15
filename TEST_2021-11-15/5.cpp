#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int n1 = 0;
	cin >> n >> n1;
	int* a = new int[n] {0};
	int* b = new int[n1] {0};
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n1; ++i)
	{
		cin >> b[i];
	}

	int maxa = 0;
	int maxb = 0;
	for (int i = 0; i < n; ++i)
	{
		maxa = max(maxa, a[i]);
	}
	for (int i = 0; i < n1; ++i)
	{
		maxb = max(maxb, b[i]);
	}

	for (int i = 0; i <= min(maxb, maxa); ++i)
	{
		bool f1 = false;
		bool f2 = false;
		for (int j = 0; j < n; ++j)
		{
			if (i == a[j])
			{
				f1 = true;
				break;
			}
		}

		for (int j = 0; j < n1; ++j)
		{
			if (i == b[j])
			{
				f2 = true;
				break;
			}
		}

		if (f2 & f1)
		{
			cout << i << ' ';
		}
	}
	cout << endl;
	delete[] a;
	delete[] b;
	return EXIT_SUCCESS;
}