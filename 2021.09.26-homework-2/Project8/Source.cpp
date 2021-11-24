#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
	cin >> a >> b >> c;
    b1 = a + b + c;
    if (a >= b && a >= c)
    {
        a1 = a; 
    }
    else if (b >= a && b >= c) 
    {
        a1 = b; 
    }
    else if (c >= a && c >= b) 
    {
        a1 = c; 
    }
    if (a <= b && a <= c) 
    {
        c1 = a; 
    }
    else if (b <= a && b <= c) 
    {
        c1 = b; 
    }
    else if (c <= a && c <= b) 
    {
        c1 = c; 
    }
    b1 = b1 - a1 - c1;
    if (a1 >= c1+b1)
    {
        cout << "impossible" << endl;
    }
    else if (a1 * a1 < (b1 * b1 + c1 * c1))
    {
        cout << "acute" << endl;
    }
    else if (a1 * a1 > (b1 * b1 + c1 * c1))
    {
        cout << "obtuse" << endl;
    }
    else
    {
        cout << "right" << endl;
    }
    return EXIT_SUCCESS;
}