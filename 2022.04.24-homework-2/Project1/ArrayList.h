#pragma once
#include<ostream>
class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);
	void sortL(int posi, int posj);

public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();

	/// <summary>
	/// ������� �������� � ����� ������
	/// </summary>
	/// <param name="element"></param>
	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);
	int extractbegin();
	int extractend();
	int extract(int position);
	/// <summary>
	/// ��������� �������� �� �������,
	/// � ������ ������ ������� �� ������� ������ ����� �������� ����� �������
	/// </summary>
	/// <param name="pos"></param>
	/// <returns></returns>
	int& operator[](int pos);
	/// <summary>
	/// ���������� ������� ������� QuickSort
	/// </summary>
	void sort();
	
	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};


