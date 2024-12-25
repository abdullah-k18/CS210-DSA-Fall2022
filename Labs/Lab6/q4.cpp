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

bool isQueueSame(Queue& obj1, Queue& obj2)
{
	if (obj1._Size() == obj2._Size())
	{
		while (obj1._Size() != 0)
			if (obj1.top() == obj2.top())
			{
				obj1.pop();
				obj2.pop();
			}
		return(true);
	}
	else
	{
		return(false);
	}
}

int main()
{
	Queue obj1;
	Queue obj2;
	obj1.push(1);
	obj1.push(2);
	obj1.push(3);
	obj1.push(4);
	obj1.push(5);
 	obj1.print();
	cout << endl;
	obj2.push(1);
	obj2.push(2);
	obj2.push(3);
	obj2.push(4);
	obj2.push(5);
	obj2.push(6);
	obj2.print();
	cout << endl;

	if (isQueueSame(obj1, obj2) == true)
	{
		cout << "Queues are same" << endl;
	}
	else
	{
		cout << "Queues are different" << endl;
	}
}