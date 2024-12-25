#include<iostream>
using namespace std;

class MinHeap
{
private:
	int arr[20];
	int count;

public:
	MinHeap() :count(-1)
	{}
	bool isEmpty()
	{
		if (count == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if (count == 19)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Insert(int d)
	{
		if (isEmpty())
		{
			count++;
			arr[count] = d;
		}
		else if (isFull())
		{
			return false;
		}
		else
		{
			count++;
			arr[count] = d;
			heapify();

		}
	}
	bool heapify()
	{
		int c = count;
		while (true)
		{
			int par = (c - 1) / 2;
			if (c == 0)
				return true;
			else {
				if (arr[c] > arr[par])
				{
					swap(arr[c], arr[par]);
					c = par;
				}
				else
					return true;
			}
		}
	}
	void Remove()
	{
		int temp;
		if (isEmpty())
		{
			cout << "NO tree" << endl;
		}
		else
		{
			arr[0] = arr[count];
			
			heapify();
			
			count--;
		}
	}
	void Print()
	{
		for (int i = 0; i < count + 1; i++)
		{
			cout << arr[i] << ", ";
		}
	}
};

int main()
{
	MinHeap min;
	
	min.Insert(2);
	min.Insert(12);
	min.Insert(7);
	min.Insert(3);
	min.Insert(1);
	min.Remove();
	min.Print();
}