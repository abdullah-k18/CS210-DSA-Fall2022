#include<iostream>
using namespace std;
const int SIZE = 1000;
class Stack
{
	private:
		int arr[SIZE];
		int top_index;
	public:
		Stack()
		{
			top_index = -1;
			for(int i = 0; i < SIZE; i++)
			{
				arr[i] = 0;
			}
		}
		
		bool isEmpty()
		{
			return (top_index == 1);
		}
		
		bool isFull()
		{
			return (top_index == (SIZE - 1));
		}
		
		void push(int d)
		{
			if(isFull())
			{
				cout << "Stack is Full.\n";
			}
			else
			{
				top_index++;
				arr[top_index] = d;
			}
		}
		
		void pop()
		{
			if(isEmpty())
			{
				cout << "Stack is Empty.\n";
			}
			else
			{
				arr[top_index] = 0;
				top_index--;
			}
		}
		
		int top()
		{
			if(isEmpty())
			{
				cout << "Stack is Empty.\n";
			}
			else
			{
				arr[top_index];
			}
		}
		
		int size()
		{
			return *(&arr + 1) - arr;
		}
		
		bool isPalindrome(string s)
		{
			int i;
			int length = size();
			int mid = length/2;
			for(i = 0; i < mid; i++)
			{
				push(s[i]);
			}
			if(length % 2 != 0)
			{
        		i++;
    		}
    		char element;
    		while(s[i] != '\0')
    		{
    			element = top();
    			pop();
			}
			if(element != s[i])
			{
				return false;
				i++;
			}
			return true;
		}
};
int main()
{
	Stack obj;
	string s = "pop";
	if(obj.isPalindrome(s))
	{
		cout << "Given String is Palindrome.";
	}
	else
	{
		cout << "Given String is Not Palindrome.";
	}
	return 0;
}