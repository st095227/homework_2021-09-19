#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int mn = -10001;
	int mm = 0;
	int i = 0;
	while (cin >> x)
	{
		++i;
		if (i == 1) 
		{
			mm = x;
		}

		if (i % 2 == 0)
		{
			if (mn < x)
			{
				mn = x;
			}
		}
		else
		{
			if (mm > x)
			{
				mm = x;
			}
		}
	}
	int sum = 0;
	sum = mn + mm;
	cout << sum << endl;
	return EXIT_SUCCESS;
}