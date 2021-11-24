#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a = 0;
	cin >> a;
	long long int value = *((long long int*) & a);
	for (int i = 0; i <= 63; ++i)
	{
		int currentBit = 63 - i;
		long long int bitMask = 1;
		bitMask = bitMask << currentBit;
		long long int bit = value & bitMask;
		bit = bit >> currentBit;
		cout << (bool)bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	return EXIT_SUCCESS;
}