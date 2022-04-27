#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	list.pushHead(-6);
	list.pushHead(-48);
	list.pushHead(-6);
	cout << list << endl;
	/*cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;*/
	list.swap(6, 7);
	cout << list << endl;
	list.insert(73, 5);
	cout << list << endl;
	cout << list.extract(5) << endl;
	cout << list << endl;
	return EXIT_SUCCESS;
}