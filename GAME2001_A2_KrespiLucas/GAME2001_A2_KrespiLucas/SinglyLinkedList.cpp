#include "SinglyLinkedList.h"


//Linked list iterador
template<class T>
LinkIterator<T>::LinkIterator()
{
	m_pNode = NULL;
}

template<class T>
LinkIterator<T>::~LinkIterator()
{
}

// OVERLOADING ITERATORS
template<class T>
void LinkIterator<T>::operator=(LinkNode<T>* node)
{
	m_pNode = node;
}

template<class T>
T* LinkIterator<T>::operator*()
{
	assert(m_pNode != NULL);
	return m_pNode->m_data;
}

template<class T>
void LinkIterator<T>::operator++()
{
	assert(m_pNode != NULL);
	m_pNode = m_pNode->m_pNext;
}

template<class T>
bool LinkIterator<T>::operator!=(LinkNode<T>* node)
{
	return (node != m_pNode);
}

template<class T>
bool LinkIterator<T>::operator==(LinkNode<T>* node)
{
	return (node == m_pNode);
}


//---------------------------------- LINKED LIST -----------------------

template<class T>
LinkedList<T>::LinkedList() : m_size(0), m_pRoot(0), m_pLastNode(0)
{}

template<class T>
LinkedList<T>::~LinkedList()
{
	while (m_root)
	{
		Pop();
	}
}

template<class T>
LinkNode<T>* LinkedList<T>::Begin()
{
	assert(m_pRoot != NULL);
	return m_pRoot;
}



