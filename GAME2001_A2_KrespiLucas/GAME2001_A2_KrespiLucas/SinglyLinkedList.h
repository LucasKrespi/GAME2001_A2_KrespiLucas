#pragma once
#include <cassert>


//Classes declaration
template <class T> class LinkIterator;
template <class T> class LinkedList;

//Linked list node class
template <class T> class LinkNode
{
public:
	friend class LinkIterator<T>;
	friend class LinkedList<T>;

private:
	T m_data;
	LinkNode* m_pNext;

};

//Linked list iterador
template <class T> class LinkIterator
{
public:
	LinkIterator();
	~LinkIterator();

	// OVERLOADING ITERATORS
	void operator=(LinkNode<T>* node);
	T* operator*();
	void operator++();
	bool operator!=(LinkNode<T>* node);
	bool operator==(LinkNode<T>* node);
	

private:
	LinkNode<T>* m_pNode;

};

//Linked list
template <class T> class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	//Functions

	LinkNode<T>* Begin();
	LinkNode<T>* Last();

private:
	int m_size;
	LinkNode<T>* m_pRoot;
	LinkNode<T>* m_pLastNode;

};

