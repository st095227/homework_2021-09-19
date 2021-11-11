#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	bool exiting = false;
	int a = 0;
	int capacity = 1;
	int* arr = new int[capacity]{ 0 };
	int k1 = 0;

	cout << "0. Выход из программы." << endl;
	cout << "1. Вывод текущего состояния массива." << endl;
	cout << "2. Добавить элемент в конец массива." << endl;
	cout << "3. Добавить элемент в начало массива." << endl;
	cout << "4. Удалить элемент из конца массива." << endl;
	cout << "5. Удалить элемент из начала массива." << endl;
	cout << "6. Развернуть массив." << endl;

	while (!exiting)
	{
		cin >> a;
		switch (a)
		{
		case 0:
			exiting = true;
			break;
		case 1:
			for (int i = 0; i < k1; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		case 2:
			++k1;
			if (capacity < k1)
			{
				int* newArr = new int[capacity * 2]{ 0 };
				for (int i = 0; i < capacity; ++i)
				{
					newArr[i] = arr[i];
				}
				delete[] arr;
				arr = newArr;
				capacity *= 2;
			}
			arr[k1 - 1] = rand() % 10 + 1;
			break;
		case 3:
			++k1;
			if (capacity < k1)
			{
				int* newArr = new int[capacity * 2]{ 0 };
				for (int i = 0; i < capacity; ++i)
				{
					newArr[i] = arr[i];
				}
				delete[] arr;
				arr = newArr;
				capacity *= 2;
			}
			for (int i = k1-1; i >= 0; --i)
			{
				arr[i] = arr[i-1];
			}
			arr[0] = rand() % 10 + 1;
			break;
		case 4:
			if (k1 >= 1)
			{
				arr[k1 - 1] = 0;
				--k1;
			}
			break;
		case 5:
			if (k1 >= 1)
			{
				for (int i = 0; i < k1; ++i)
				{
					arr[i] = arr[i + 1];
				}
				arr[k1 - 1] = 0;
				--k1;
			}
			break;
		case 6:
			int* newArr = new int[capacity]{ 0 };
			for (int i = 0; i < k1; ++i)
			{
				newArr[i] = arr[k1 - i - 1];
			}
			delete[] arr;
			arr = newArr;
			break;
		}
	}
	delete[] arr;
	return EXIT_SUCCESS;
}