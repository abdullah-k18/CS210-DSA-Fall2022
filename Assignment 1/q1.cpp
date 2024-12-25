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
	public:
		SortedLinkedList()
		{
			this -> head ;
			this -> tail = NULL;
		}
		
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
int main()
{
	SortedLinkedList obj;
	obj.Insert_node(7);
	obj.Insert_node(2);
	obj.print();
}