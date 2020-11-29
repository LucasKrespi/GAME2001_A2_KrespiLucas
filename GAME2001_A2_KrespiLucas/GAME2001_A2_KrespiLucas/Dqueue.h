#pragma once

#include "DoublyLinkedList.h"

template<class T>
class PriorityQueue
{
public:
	PriorityQueue(int size)
	{
		assert(size > 0);
		m_size = size; 

	}
	~PriorityQueue()
	{}

	//---------------Functions----------------
	void push_back(T val)
	{
		if (m_elements.GetSize() < m_size)
		{
			m_elements.Push(val);
		}
	}
	void pop_back()
	{
		m_elements.Pop_Front();
	}
	//------------------Deque----------------
	void push_front(T val)
	{
		if (m_elements.GetSize() < m_size)
		{
			m_elements.Push_Front(val);
		}
	}
	void pop_front()
	{
		m_elements.Pop();
	}
	T& front()
	{
		LinkIterator<T> it;
		it = m_elements.Begin();

		return *it;
	}
	T& back()
	{
		LinkIterator<T> it;
		it = m_elements.Last();

		return *it;
	}
	int getSize()
	{
		return m_elements.GetSize();
	}
	int getMaxSize()
	{
		return m_size;
	}
	bool isEmpty()
	{
		return (m_elements.GetSize() == 0);
	}
	void resize(int size)
	{
		assert(size > 0);
		m_size = size;
	}
private:
	LinkedList<T> m_elements;
	int m_size;
};
