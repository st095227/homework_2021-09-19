#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100] = { 0 };
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << "ARRAY : ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "EVEN : ";
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "SUM : ";
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	cout << sum << endl;

	cout << "PRODUCT OF NEGATIVE : ";
	int prn = 1;
	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			prn *= a[i];
			k = 1;
		}
	}
	if (k > 0)
	{
		cout << prn << endl;
	}
	else
	{
		cout << k << endl;
	}

	cout << "FIRST MIN INDEX : ";
	int fmi = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < a[fmi])
		{
			fmi = i;
		}
	}
	cout << fmi << endl;

	cout << "SECOND MAX : ";
	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	int smax = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]<max && a[i]>smax)
		{
			smax = a[i];
		}
	}
	cout << smax << endl;

	cout << "REVERSE : ";
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES : ";
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}