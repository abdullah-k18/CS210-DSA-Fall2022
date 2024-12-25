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
    	
    	int _Size()
		{
			return( size) ;
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
int main()
{
    Stack obj;
    obj.push(17);
    obj.push(7);
    obj.push(12);
    obj.print();
    cout << "Top: " << obj.top() << endl;
    obj.pop();
    obj.pop();
    obj.push(19);
    obj.push(21);
    obj.print();
    cout << "Top: " << obj.top() << endl;
    return 0;