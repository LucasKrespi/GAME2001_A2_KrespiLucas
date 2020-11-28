#include <iostream>
#include "DoublyLinkedList.h"


int main() {
	std::cout << "TEST 01" << std::endl;

	LinkedList<int> Test;

	Test.Push(1);
	Test.Pop();
	Test.Push(2);
	Test.Push(3);
	Test.Push(4);
	Test.Push_Front(450);
	Test.Push_Front(5);
	Test.Pop_Front();

	LinkIterator<int> it;

	for (it = Test.Begin(); it != Test.End(); it++)
	{
		std::cout << " " << *it << std::endl;
	}

	

	return 0;
}