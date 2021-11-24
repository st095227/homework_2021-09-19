#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int maxx = 0;
	int minx = 1001;
	int n = 0;
	cin >> n;
	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (maxx < arr[i])
		{
			maxx = arr[i];
		}
		if (minx > arr[i])
		{
			minx = arr[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == maxx)
		{
			arr[i] = minx;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	delete[] arr;
	return EXIT_SUCCESS;
}