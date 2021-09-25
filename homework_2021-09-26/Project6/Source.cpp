#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a1 = 0;
    int b1 = 0;
    int a2 = 0;
    int b2 = 0;
    cin >> a1 >> b1 >> a2 >> b2;
    if ((abs(a1 - a2) == abs(b1 - b2)) || a1 == a2 || b1 == b2) 
    { 
        cout << "YES" << endl;
    }
    else 
    { 
        cout << "NO"<<endl; 
    }
    return EXIT_SUCCESS;
}