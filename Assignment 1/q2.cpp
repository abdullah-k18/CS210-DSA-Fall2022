#include<iostream>
using namespace std;

class Node
{
	int data;
	Node *next;
	friend class SortedLinkedList;
};

class SortedLinkedList
{
	private:
		Node *head;
		Node *tail;
		int size;
	public:
		SortedLinkedList() : head(NULL), tail(NULL), size(0) {}
		
		~SortedLinkedList() {}
		
		bool isEmpty()
		{
			return(head == NULL);
		}
		
		void clear()
		{
			while(!isEmpty())
			{
				if(isEmpty())
				{
					cout << "Liked List is Empty.\n";
				}
				else
				{
					Node *temp = head;
					head = head -> next;
					if(head == NULL)
					{
						tail = head;
						delete temp;
					}
				}
			}
		}

		void Insert_node(int val)
    	{
        	Node *temp = new Node;
        	temp -> data = val;
        	temp -> next = NULL;
        	if(head == NULL)
        	{
            	head = temp;
            	tail = temp;
        	}	
        	else
        	{
            	tail -> next = temp;
           	 	tail = temp;
        	}
        	size++;
    	}
    	
    	void deleteNode(int val)
		{		
    		if(isEmpty())
    		{
    			cout << "Linked List is Empty\n";
			}
    		Node* temp = head;
    		if(val == 0)
			{
        		head = temp -> next;
        		delete temp;
        		return;
    		}
	    	for(int i = 0; temp != NULL && i < val - 1; i++)
	    	{
	    		temp = temp->next;
			}
    		if(temp == NULL || temp -> next == NULL)
    		{
    			return;
			}
	    	Node* next = temp -> next -> next;
	    	delete(temp -> next);
	    	temp -> next = next;
	    	size--;
		}
    	
    	Node *find(int val)
    	{
    		if(isEmpty())
    		{
    			cout << "Linked List is Empty.\n";
    			return NULL;
			}
			else
			{
				Node *temp = head;
				while(temp != NULL)
				{
					if(temp -> data == val)
					{
						return temp;
					}
					else
					{
						temp = temp -> next;
					}
					return NULL;
				}
			}
		}
    	
    	int _Size()
		{
			return size;
		}
    	
    	int top()
		{
			if (isEmpty())
			{
				cout << "link list is empty " << endl;
			}
			else
			{
				return(head -> data);
			}
		}
	
    	void print()
    	{
    		Node *temp = head;
    		if(isEmpty())
    		{
    			cout << "Linked List is Empty.\n";
			}
			else
			{
				while(temp != NULL)
				{
					cout << temp -> data << " ";
					temp = temp -> next;
				}
				cout << endl;
			}
		}
};

bool common_vals(SortedLinkesList obj1,SortedLinkedList obj2)
{
	if (arr1._Size() == arr2._Size())
	{
		while(arr1._Size()!=0)
		if(arr1.head==arr2.head)
		{
			head--;
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
	SortedLinkedList obj1;
	SortedLinkedList obj2;
	obj1.Insert_node(1);
	obj1.Insert_node(2);
	obj1.Insert_node(3);
	
	obj2.Insert_node(1);
	obj2.Insert_node(2);
	obj2.Insert_node(3);
	
	if (common_vals(obj1, obj2) == true)
	{
		cout << head << " ";
	}
	else {
		cout << "No element is common." << endl;
	}
	}
}