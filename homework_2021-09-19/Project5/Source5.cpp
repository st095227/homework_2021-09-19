#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int v = 0;
	int c = 0;
	cin >> v;
	c = v / 100 + (v / 10%10) + v % 10;
	cout << c << endl;

	return EXIT_SUCCESS;
}