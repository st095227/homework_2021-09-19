#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int c1 = 0;
	cin >> a;
	b = a / 100;
	c = a % 100;
	d = a % 10;
	c1 = a % 100 / 10 * 10;
	switch (b)
	{
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "��������� ";
		break;
	case 9:
		cout << "��������� ";
		break;
	}
	if (c < 20) 
	{
		switch (c)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		case 10:
			cout << "������ �������" << endl;
			break;
		case 11:
			cout << "����������� �������" << endl;
			break;
		case 12:
			cout << "���������� �������" << endl;
			break;
		case 13:
			cout << "���������� �������" << endl;
			break;
		case 14:
			cout << "������������ �������" << endl;
			break;
		case 15:
			cout << "���������� �������" << endl;
			break;
		case 16:
			cout << "����������� �������" << endl;
			break;
		case 17:
			cout << "���������� �������" << endl;
			break;
		case 18:
			cout << "������������ �������" << endl;
			break;
		case 19:
			cout << "������������ �������" << endl;
			break;
		}
	}
	else
	{
		switch (c1)
		{
		case 20:
			cout << "�������� ";
			break;
		case 30:
			cout << "�������� ";
			break;
		case 40:
			cout << "����� ";
			break;
		case 50:
			cout << "��������� ";
			break;
		case 60:
			cout << "���������� ";
			break;
		case 70:
			cout << "��������� ";
			break;
		case 80:
			cout << "����������� ";
			break;
		case 90:
			cout << "��������� ";
			break;
		}
		switch (d)
		{
		case 1:
			cout << "���� �����" << endl;
			break;
		case 2:
			cout << "��� ������" << endl;
			break;
		case 3:
			cout << "��� ������" << endl;
			break;
		case 4:
			cout << "������ ������" << endl;
			break;
		case 5:
			cout << "���� �������" << endl;
			break;
		case 6:
			cout << "����� �������" << endl;
			break;
		case 7:
			cout << "���� �������" << endl;
			break;
		case 8:
			cout << "������ �������" << endl;
			break;
		case 9:
			cout << "������ �������" << endl;
			break;
		default:
			cout << "�������" << endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}