#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int f = 0;
	int s = 0;
	cin >> a >> f >> s;
	int fbit = (a & (1 << f)) >> f; // �������� ������� (�������������) ����
	int sbit = (a & (1 << s)) >> s; // �������� ������� ����
	a = a & (~(1 << f)); // "����������" ��� ���� �� �����
	a = a & (~(1 << s));
	a = a | (fbit << s) | (sbit << f); // ��������� "���������" ������� ������� ������ (������ �� ������ ������� � ��������)
	cout << a << endl;
	return EXIT_SUCCESS;
}