#include<iostream>
using namespace std;

class TreeNode
{
private:
	TreeNode* left;
	TreeNode* right;
	int data;

public:
	TreeNode() : right(NULL),left(NULL),data(0) {}
	TreeNode(int data) : right(NULL), left(NULL), data(data) {}
	friend class BST;
};

class BST
{
private:
	TreeNode* root;
	void inorder_traversal(TreeNode* tr)
	{
		if (tr == NULL)
		{
			return;
		}
		inorder_traversal(tr -> left);
		cout << tr -> data << " , ";
		inorder_traversal(tr -> right);
	}
	void postorder_traversal(TreeNode* tr)
	{
		if (tr == NULL)
		{
			return;
		}
		postorder_traversal(tr -> left);
		postorder_traversal(tr -> right);
		cout << tr -> data <<" , " ;
	}
	void preorder_traversal(TreeNode* tr)
	{
		if (tr == NULL)
		{
			return;
		}
		cout << tr -> data << " , ";
		preorder_traversal(tr -> left);
		preorder_traversal(tr -> right);
	}
public:
	BST() : root(NULL) {}

	bool isEmpty()
	{
		return (root == NULL);
	}

	void insert(int d)
	{
		TreeNode * temp = new TreeNode(d);
		if (isEmpty())
		{
			root = temp;
		}
		else
		{
			TreeNode* crt = root;
			while (true)
			{
				if (d >= crt -> data)
				{
					if (crt -> right == NULL)
					{
						crt -> right = temp;
						return;
					}
					else
					{
						crt = crt -> right;
					}
				}
				if (d < crt -> data)
				{
					if (crt -> left == NULL)
					{
						crt -> left = temp;
						return;
					}
					else
					{
						crt = crt -> left;
					}
				}
			}
		}
	}

	void inorder_traversal()
	{
		cout << "In-Order Traversal is: ";
		inorder_traversal(root);
		cout << endl;
	}

	void preorder_traversal()
	{
		cout << "Pre-Order Traversal is: ";
		preorder_traversal(root);
		cout << endl;
	}

	void postorder_traversal()
	{

		cout << "Post-Order Traversal is: ";
		postorder_traversal(root);
		cout << endl;
	}
};

int main()
{
	BST b;
	b.insert(40);
	b.insert(20);
	b.insert(50);
	b.insert(5);
	b.insert(10);
	b.insert(80);
	b.inorder_traversal();
	b.preorder_traversal();
	b.postorder_traversal();
}