#pragma once
//#define MY_DEBUG
#include <iostream>
using namespace std;
template<typename T>
class FwdList
{
public:
	FwdList() = default;
	FwdList(const FwdList& obj);
	FwdList& operator = (const FwdList& obj);
	bool operator == (const FwdList& obj);
	void pushFront(const T& data);
	void print()const;
	void eraseFront();
	void pushAfter(const T& searchData, const T& data);
	bool Swap(const T& searchData, const T& data);
	void move();
	void clear();
	void eraseAfter(const T& searchData);
	void eraseTail();
	void addTail(const T& data);


	~FwdList();
private:
	auto findNode(const T& data);
	struct Node {
		T data;
		Node* next;
		Node(const T& data, Node* next = nullptr)
			:data(data), next(next)
		{}
	};
	Node* head = nullptr;
	Node* tail = nullptr;
	const bool isEmpty()const;
};

template<typename T>
inline FwdList<T>::FwdList(const FwdList& obj)
{
	Node* temp = obj.head;
	while (temp != nullptr) {
		addTail(temp->data);
		temp = temp->next;
	}
}

template<typename T>
inline FwdList<T>& FwdList<T>::operator=(const FwdList& obj)
{
	Node* temp = obj.head;
	while (temp != nullptr) {
		addTail(temp->data);
		temp = temp->next;
	}
	return *this;
}

template<typename T>
inline bool FwdList<T>::operator==(const FwdList& obj)
{
	Node* tempFirst = head;
	Node* tempSecond = obj.head;

		while (tempFirst != tail && tempSecond != obj.tail) {
			if (tempFirst->data == tempSecond->data) {
				tempFirst = tempFirst->next;
				tempSecond = tempSecond->next;

			}
			else {
				return false;
			}
		}
	
		if (tempFirst != nullptr && tempSecond != nullptr) {
			if (tempFirst->data == tempSecond->data) {
				return true;
			}
		}
			return false;
}

template<typename T>
inline void FwdList<T>::pushFront(const T& data)
{
	Node* tmp = new Node(data, head);
	if (isEmpty())
	{
		tail = tmp;
	}
	head = tmp;

}

template<typename T>
inline void FwdList<T>::print() const
{
	Node* tmp = head;
	while (tmp != nullptr)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

template<typename T>
inline void FwdList<T>::eraseFront()
{
	if (!isEmpty())
	{
		auto tmp = head;
		head = head->next;
		if (isEmpty())
		{
			tail = nullptr;
		}
#ifdef MY_DEBUG
		cout << "Was deleted " << tmp->data << endl;
#endif 
		delete tmp;
	}
}

template<typename T>
inline void FwdList<T>::pushAfter(const T& searchData, const T& data)
{
	Node* find = findNode(searchData);
	if (find != nullptr)
	{
		Node* ins = new Node(data, find->next);
		find->next = ins;
		if (find == tail)
		{
			tail = ins;
		}
	}
}

template<typename T>
inline bool FwdList<T>::Swap(const T& searchData, const T& data)
{
	Node* find = findNode(searchData);
	if (find != nullptr)
	{
		find->data = data;

		if (find == tail)
		{
			tail->data = data;
		}
		return true;
	}
	return false;
}

template<typename T>
inline void FwdList<T>::move()
{

	Node* temp = head;
	FwdList <T> reversed_list;
	while (temp != nullptr) {
		reversed_list.pushFront(temp->data);
		temp = temp->next;
	}
	this->clear();
	*this = reversed_list;
}



template<typename T>
inline void FwdList<T>::clear()
{
	while (!isEmpty())
	{
		eraseFront();
	}
}

template<typename T>
inline void FwdList<T>::eraseAfter(const T& searchData)
{
	Node* find = findNode(searchData);
	if (find != nullptr)
	{
		if (find->next != nullptr)
		{
			auto tmp = find->next;
			find->next = tmp->next;
			delete tmp;
		}



	}
}

template<typename T>
inline void FwdList<T>::eraseTail()
{

	if (!isEmpty()) {
		Node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		temp->next = nullptr;
	}
}

template<typename T>
inline void FwdList<T>::addTail(const T& data)
{
	Node* add = new Node(data);
	if (!isEmpty())
	{
		tail->next = add;
	}
	else {
		head = add;
	}
	tail = add;
}

template<typename T>
inline FwdList<T>::~FwdList()
{
	clear();
}

template<typename T>
inline auto FwdList<T>::findNode(const T& data)
{
	Node* tmp = head;
	while (tmp != nullptr && tmp->data != data)
	{
		tmp = tmp->next;
	}
	return tmp;
}



template<typename T>
inline const bool FwdList<T>::isEmpty() const
{
	return head == nullptr;
}
