#include <iostream>
#include "PriorityQueue.h"
using namespace std;

int main() {
	std::cout << "TEST 01" << std::endl;

	const int SIZE = 9;
	PriorityQueue<int> TestQ(SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		TestQ.push(10 + i);
	}

	cout << "Test Queue (Size = " << TestQ.getSize() << " ): " << endl;

	while (TestQ.isEmpty()==false)
	{
		cout << " " << TestQ.front();
		TestQ.pop();
	}

	if (TestQ.isEmpty())
	{
		cout << " \n The QUEUE is Empity \n";
	}
	else 
	{
		cout << " \n The QUEUE is NOT Empity \n";
	}


	return 0;
}