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
 
class Stack
{
	private:
    	Node* head;
    	int size;
	public:
    	Stack()
    	{
    		head = NULL;
		}
    	
		~Stack() {}
		
		bool isEmpty()
    	{
        	return(head == NULL);
    	}
 
    	void push(int d)
    	{
        	Node* temp = new Node(d);
        	if(isEmpty())
			{
            	head = temp;
        	}
        	else
        	{
        		temp -> next = head;
        		head = temp;
			}
        	size++;
    	}
    int top()
    {
        if (!isEmpty())
        {
            return head -> data;
        }
        else
        {
        	cout << "Stack is Empty.\n";
		}
    }
    
    void pop()
    {
        Node* temp;
        if (isEmpty())
		{
            cout << "Stack is Empty.\n";
        }
        else
		{
			Node* temp;
            temp = head;
            head = head -> next;
            delete temp;
        }
    }
    
    int _Size()
	{
		return(size) ;
	}
    
    void print()
    {
        Node* temp;
		temp = head;
		while (temp != NULL)
		{
			cout << temp -> data << endl;
			temp = temp -> next;
		}
    }
};

bool isStackSame(Stack &obj1, Stack& obj2)
{
	if (obj1._Size() == obj2._Size())
	{
		while(obj1._Size()!=0)
		if(obj1.top()==obj2.top())
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
	
	Stack obj1;
	Stack obj2;
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

	if (isStackSame(obj1, obj2) == true)
	{
		cout << "stacks are same" << endl;
	}
	else
	{
		cout << "stacks are different" << endl;
	}
}