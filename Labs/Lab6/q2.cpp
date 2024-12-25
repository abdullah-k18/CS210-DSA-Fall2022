#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node() :data(0), next(NULL) {}
Node(int data) :data(data), next(NULL) {}
};
 
class Queue
{
	Node* front;
	Node* rear;
	int _size;
public:
	Queue():front(NULL), rear(NULL) ,_size(0) {}
	~Queue()
	{
		clear();
	}
	void clear()
	{
		pop();
	}
	bool isEmpty()
	{
		return(front == NULL);
	}

	void push(int d)
	{
		Node* temp = new Node(d);
		if (isEmpty())
		{
			front = temp;
			rear = temp;
		}
		else
		{
			rear -> next = temp;
			rear = temp;
		}
		_size++;
	}

	void pop()
	{
		Node* temp;
		if (isEmpty())
		{
			cout << "link list is empty " << endl;
		}
		else
		{
			Node* temp = front;
			front = front -> next;
			delete temp;
		}
		_size--;
	}
	int _Size()
	{
		return(_size);
	}
	int top()
	{
		if (isEmpty())
		{
			cout << "link list is empty " << endl;
		}
		else
		{
			return(front -> data);
		}
	}
	void print()
	{
		if (isEmpty())
		{
			cout << "link list is empty " << endl;
		}
		else
		{
			Node* temp = front;
			while (temp != NULL)
			{
				cout << temp -> data << " ";
				temp = temp -> next;
			}
		}
	}

};
int main()
{
	Queue obj;
	obj.push(45);
	obj.push(2);
	obj.print();
}