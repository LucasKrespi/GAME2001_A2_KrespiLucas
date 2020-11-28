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
	void push(T val)
	{
		if (m_elements.GetSize() < m_size)
		{
			m_elements.Push(val);
		}
	}
	void pop()
	{
		m_elements.Pop_Front();
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
