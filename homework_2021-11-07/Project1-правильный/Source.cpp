#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int f = 0;
	int s = 0;
	cin >> a >> f >> s;
	int fbit = (a & (1 << f)) >> f; // значение первого (перемещаемого) бита
	int sbit = (a & (1 << s)) >> s; // значение второго бита
	a = a & (~(1 << f)); // "выкалываем" два бита из числа
	a = a & (~(1 << s));
	a = a | (fbit << s) | (sbit << f); // заполняем "выколотые" позиции нужными битами (первый во вторую позицию и наоборот)
	cout << a << endl;
	return EXIT_SUCCESS;
}