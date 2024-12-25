#include<iostream>
using namespace std;
	class Node
	{
		private:
			int data;
			Node *next;
			Node *prev;
		public:
			Node() :data(0), next(NULL), prev(NULL) {}
			Node(int data) :data(data), next(NULL), prev(NULL) {}
			friend class doublyLinkedList;
	};
	class doublyLinkedList
	{
		private:
			Node *head;
			Node *tail;
		public:
			doublyLinkedList()
			{
				this->head = NULL;
				this->tail = NULL;
			}
			~doublyLinkedList() {}
			
			bool isEmpty()
			{
				return (head == NULL);
			}
			
			int size(Node *temp)
			{
				int size = 0;
				while(temp != NULL)
				{
					size++;
					temp = temp->next;
				}
				return size;
			}
			
			void insertAtStart(int d)
			{
				Node *current = new Node();
				current->data = d;
				current->next = head;
				current->prev = NULL;
				if (isEmpty())
				{
					head = tail = current;
				}
				else if(head != NULL)
				{
					head->prev=current;
				}
				head = current;
			}
			
			void insertAtPosition(int val, int position)
			{
				if(isEmpty())
				{
					if(position == 0)
					{
						insertAtStart(val);
					}
					else
					{
						cout << "Position:" << position << "does not exist./n";
					}
				}
				else
				{
					if(position == 0)
					{
						insertAtStart(val);
					}
					else
					{
						if(position > size(head))
						{
							cout << "Position" << position << "is out of bond./n";
						}
						else if(position == size(head))
						{
							insertAtEnd(val);
						}
						else
						{
							Node *temp = new Node(val);
							Node* current = head;
          					int P = 0;
							while(P != (position - 1))
							{
								P++;
								current = current->next;
							}
							temp->next = current->next;
							current->next = temp;   
						}
					}
				}
			}
			
			void insertAtEnd(int d)
			{
				Node *current = new Node();
				Node *tail = head;
				current->data = d;
				current->next = NULL;
				if(isEmpty())
				{
					head = tail = current;
				}
				else if(head == NULL)
				{
					current->prev = NULL;
					head = current;
					return;
				}	
				while(tail->next != NULL)
				{
					tail = tail->next;
				}
				tail->next = current;
				current->prev = tail;
			}
			
			void deleteFromStart()
			{
				if(head != NULL)
				{
					Node *temp = head;
					head = head->next;
					if(head != NULL)
					{
						head->prev = NULL;
					}
				}
			}
			
			void deleteFromPosition(int position)
			{     
      			if(position < 0)
				{
        			cout << "Position " << position << "does not exist./n";
      			}
				else if(position == 0 && head != NULL)
				{ 
        			Node* current = head;
        			head = head->next;
        			if(head != NULL)
        			{
          				head->prev = NULL;
          			}
      			}
				else
				{
        			Node* temp = head;
        			for(int i = 0; i < position-1; i++)
					{
         	 			if(temp != NULL)
						{
            				temp = temp->next;
         				}
        			}
        			if(temp != NULL && temp->next != NULL)
					{
          				Node* nodeToDelete = temp->next;
          				temp->next = temp->next->next;
          				if(temp->next->next != NULL)
          				{
            				temp->next->next->prev = temp->next;
						}
        			}
					else
					{
          				cout << "Linked List is Empty./n";
        			}       
      			}

			}
			
			void deleteFromEnd()
			{
				if(head != NULL)
				{
					if(head->next == NULL)
					{
						head = NULL;
					}
					else
					{
						Node *temp = head;
						while(temp->next->next != NULL)
						{
							temp = temp->next;
						}
						Node *tail = temp->next;
						temp->next = NULL;
						
					}
				}
			}
			
			void Print()
			{
				Node* temp;
				if (isEmpty())
				{
					cout << "Linked List is Empty";
				}
				else
				{
					temp = head;
					while (temp != NULL)
					{
						cout << temp->data << " ";
						temp = temp->next;
					}
				}
			}
	};
	int main()
	{
		doublyLinkedList obj;
		obj.insertAtStart(2);
		obj.insertAtStart(18);
		obj.insertAtEnd(17);
		obj.insertAtStart(7);
		obj.deleteFromEnd();
		obj.Print();
		cout<<endl;
		obj.insertAtPosition(10, 0);
		obj.Print();
		cout<<endl;
		obj.deleteFromPosition(0);
		obj.Print();
	}
