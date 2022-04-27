#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}
void LinkedList::swap(int index1, int index2)
{
	if (index1 == index2)
	{

	}
	else if (index1 >= count || index2 >= count)
	{
		
	}
	else
	{
		if (index1 > index2)
		{
			std::swap(index1, index2);
		}
		Node* t0 = head;
		for (int i = 0; i < index1 - 1; ++i)
		{
			t0 = t0->next;
		}
		Node* t1 = head;
		for (int i = 0; i <= index1 - 1; ++i)
		{
			t1 = t1->next;
		}
		Node* t2 = head;
		for (int i = 0; i <= index1; ++i)
		{
			t2 = t2->next;
		}
		Node* t3 = head;
		for (int i = 0; i < index2 - 1; ++i)
		{
			t3 = t3->next;
		}
		Node* t4 = head;
		for (int i = 0; i <= index2 - 1; ++i)
		{
			t4 = t4->next;
		}
		Node* t5 = head;
		for (int i = 0; i <= index2; ++i)
		{
			t5 = t5->next;
		}
		if ((index1 != 0 && index2 != 0) && (index2 - 1 != index1))
		{
			t0->next = t4;
			t4->next = t2;
			t3->next = t1;
			t1->next = t5;
		}
		else if (index1 == 0 || index2 == 0)
		{
			head = t4;
			t4->next = t2;
			t3->next = t1;
			t1->next = t5;
		}
		else if (index2 - 1 == index1)
		{
			t0->next = t4;
			t4->next = t1;
			t1->next = t5;
		}
	}
}

int LinkedList::ind(int index)
{
	if (index > this->count - 1)
	{
		return (count - 1);
	}
	else
	{
		return index;
	}
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}

void LinkedList::insert(int element, int index)
{
	if (index == 0)
	{
		pushHead(element);
	}
	else if (index == count - 1)
	{
		pushTail(element);
	}
	else
	{
		Node* t0 = head;
		for (int i = 0; i < index-1; ++i)
		{
			t0 = t0->next;
		}
		Node* t1 = head;
		for (int i = 0; i < index; ++i)
		{
			t1 = t1->next;
		}
		
		t0->next = new Node(element, t1);
		++count;
	}
}

int LinkedList::extract(int index)
{
	if (index == 0)
	{
		popHead();
	}
	else if (index == count - 1)
	{
		popTail();
	}
	else
	{
		Node* t0 = head;
		for (int i = 0; i < index - 1; ++i)
		{
			t0 = t0->next;
		}
		Node* t1 = head;
		for (int i = 0; i < index; ++i)
		{
			t1 = t1->next;
		}
		t0->next = t1->next;
		--count;
		int value = t1->data;
		delete t1;
		return value;
	}
}