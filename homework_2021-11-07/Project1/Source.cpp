#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	unsigned int a = 0;
	cin >> a;
	bool number[32] = { 0 };
	for (int i = 0; i < 32; ++i)
	{
		number[i] = a & (1 << i);
	}
	cout << "original number : ";
	for (int i = 31; i >= 0; --i)
	{
		cout << number[i];
	}
	cout << endl;
	short firstPosition = 0;
	short secondPosition = 0;
	cin >> firstPosition >> secondPosition;
	bool buf = false;
	buf = number[firstPosition];
	number[firstPosition] = number[secondPosition];
	number[secondPosition] = buf;
	cout << "changed number :  ";
	for (int i = 31; i >= 0; --i)
	{
		cout << number[i];
	}
	cout << endl;
	return EXIT_SUCCESS;
}