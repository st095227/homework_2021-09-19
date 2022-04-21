#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::swap(int posi, int posj)
{
	int m = this->data[ind(posi)];
	this->data[ind(posi)] = this->data[ind(posj)];
	this->data[ind(posj)] = m;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}
void ArrayList::sort()
{
	sortL(0, this->count-1);
}
void ArrayList::sortL(int posi0, int posj0)
{
	int d = this->data[posj0];
	int posi = posi0;
	int posj = posj0;
	do
	{
		while (data[posi] < d)
		{
			++posi;
		}
		while (data[posj] > d)
		{
			--posj;
		}
		if (posj >= posi)
		{
			swap(posi, posj);
			--posj;
			++posi;
		}
	} while (posi <= posj);
		if (posj > posi0)
		{
			sortL(posi0, posj);
		}
		if (posi < posj0)
		{
			sortL(posi, posj0);
		}
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	pushend(0);
	for (int i = count-1; i > 0; --i)
	{
		this->data[i] = this->data[i - 1];
	}
	this->data[0] = element;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extractbegin()
{
	int m = this->data[0];
	for (int i = 0; i < (count - 1); ++i)
	{
		this->data[i] = this->data[i + 1];
	}
	this->count--;
	return m;
}

void ArrayList::insert(int element, int position)
{
	if (position <= 0)
	{
		pushbegin(element);
	}
	else if (position >= (count - 1))
	{
		pushend(element);
	}
	else
	{
		pushend(0);
		for (int i = count - 1; i > position; --i)
		{
			this->data[i] = this->data[i - 1];
		}
		this->data[position] = element;
	}
}

int ArrayList::extract(int position)
{
	if (position <= 0)
	{
		return extractbegin();
	}
	else if (position >= (count - 1))
	{
		return extractend();
	}
	else
	{
		int m = this->data[position];
		for (int i = position; i < (count-1); ++i)
		{
			this->data[i] = this->data[i + 1];
		}
		this->count--;
		return m;
	}
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}
