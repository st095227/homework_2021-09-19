#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	
	if ((b == 0 && a == 0) && (-d%c!=0))
	{
		cout << "INF" << endl;
	}
	else if ((a==0)||(b%a!=0))
	{
		cout << "NO" << endl;
	}
	else if (b% a == 0 && ((b / a) != (d / c)))
	{
		cout << -b / a << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}