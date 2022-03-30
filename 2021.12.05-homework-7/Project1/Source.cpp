#include<iostream>
#include"mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int r = 0;
	cout << "circle radius: ";
	cin >> r;
	circle(r);
	cout << "number: ";
        cin >> n;
	cout << f(n, k) << endl;
	return EXIT_SUCCESS;
}
