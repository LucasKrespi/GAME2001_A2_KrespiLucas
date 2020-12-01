#include <iostream>
#include "PriorityQueue.h"
using namespace std;

template<class T>
class less_cmp // Less than compare with nonpointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return (lVal < rVal);
	}
};

template<class T>
class less_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return ((*lVal) < (*rVal));
	}
};

template<class T>
class greater_cmp // Less than compare with nonpointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !(lVal < rVal);
	}
};

template<class T>
class greater_cmp_pointer // Less than compare with pointer types
{
public:
	inline bool operator()(T lVal, T rVal)
	{
		return !((*lVal) < (*rVal));
	}
};

class NetworkMessage
{
public:
	NetworkMessage() : m_priority(0), m_Data(0) {}
	NetworkMessage(int p, int Data) : m_priority(p), m_Data(Data) {}
	~NetworkMessage() {}

	int GetPriority()
	{
		return m_priority;
	}
	int GetID()
	{
		return m_Data;
	}
	// Overload operators
	bool operator<(NetworkMessage& m)
	{
		// Check again the priority level of both network messages
		if (m_priority < m.GetPriority())
		{
			return true;
		}
		return false;
	}
	bool operator>(NetworkMessage& m)
	{
		return !(*this < m);
	}
private:
	int m_priority;
	int m_Data;
};

int main()
{
	cout << "Priority queue data structure example!" << endl << endl;

	const int SIZE = 10;
	PriorityQueue<NetworkMessage, less_cmp<NetworkMessage> > que(SIZE);

	que.push(NetworkMessage(3, 1));
	que.push(NetworkMessage(2, 2));
	que.push(NetworkMessage(1, 7));
	que.push(NetworkMessage(3, 4));
	que.push(NetworkMessage(4, 5));
	que.push(NetworkMessage(5, 6));
	que.push(NetworkMessage(1, 3));
	que.push(NetworkMessage(2, 8));
	que.push(NetworkMessage(4, 9));
	que.push(NetworkMessage(5, 10));

	// Display the priority queue
	cout << "Priority queue content (Size - " << que.getSize() << ") : " << endl;

	while (que.isEmpty() == false)
	{
		cout << "   Priority: " << que.front().GetPriority();
		cout << "   Data: " << que.front().GetID();
		cout << "   List Size: " << que.getSize();
		cout << endl;

		que.pop();
	}

	cout << endl;

	if (que.isEmpty() == true)
	{
		cout << "The container is empty" << endl;
	}
	else
	{
		cout << "The container is NOT empty" << endl;
	}

	return 0;
}