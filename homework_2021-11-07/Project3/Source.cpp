#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a = 0;
	cin >> a;
	long long int value = *((long long int*) & a);
	long long int bitMask = 1;
	bitMask = bitMask << 63;
	bitMask = ~bitMask;
	value = value & bitMask;
	double b = *((double*) & value);
	cout << b;
	return EXIT_SUCCESS;
}