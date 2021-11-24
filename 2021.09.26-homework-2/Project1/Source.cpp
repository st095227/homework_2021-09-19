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
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}
	if (c < 20) 
	{
		switch (c)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		case 10:
			cout << "десять бананов" << endl;
			break;
		case 11:
			cout << "одиннадцать бананов" << endl;
			break;
		case 12:
			cout << "двенадцать бананов" << endl;
			break;
		case 13:
			cout << "тринадцать бананов" << endl;
			break;
		case 14:
			cout << "четырнадцать бананов" << endl;
			break;
		case 15:
			cout << "пятнадцать бананов" << endl;
			break;
		case 16:
			cout << "шестнадцать бананов" << endl;
			break;
		case 17:
			cout << "семнадцать бананов" << endl;
			break;
		case 18:
			cout << "восемнадцать бананов" << endl;
			break;
		case 19:
			cout << "девятнадцать бананов" << endl;
			break;
		}
	}
	else
	{
		switch (c1)
		{
		case 20:
			cout << "двадцать ";
			break;
		case 30:
			cout << "тридцать ";
			break;
		case 40:
			cout << "сорок ";
			break;
		case 50:
			cout << "пятьдесят ";
			break;
		case 60:
			cout << "шестьдесят ";
			break;
		case 70:
			cout << "семьдесят ";
			break;
		case 80:
			cout << "восемьдесят ";
			break;
		case 90:
			cout << "девяносто ";
			break;
		}
		switch (d)
		{
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		default:
			cout << "бананов" << endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}