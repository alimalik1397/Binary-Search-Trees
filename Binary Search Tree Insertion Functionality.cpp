/*
Implementing Binary Search Tree using C++ with the functionality of Insertion.
*/


#include<iostream>
using namespace std;
//Creating a node class
class node
{
public:
	int data;//Data element 
	node *left;//left pointer
	node *right;//right pointer
public:
	node()//Default constructor
	{
		left = NULL;
		right = NULL;
	}
	
	node(int d)//Parameterized constructor

	{
		data = d;
		left = NULL;
		right = NULL;
	}

};


class Tree//Creating a class tree
{
public:
	node *root;//root node
	Tree()
	{
		root = NULL;
	}

};
void insertItem(node *&tree, int item)//Insert function
{

	if (tree == NULL)//If there is no root node
	{
		
		tree = new node(item);//Creating a new root node
		cout << "Root inserted " << endl;
		tree->right = NULL;//Making left and right sub branches NULL
		tree->left = NULL;

	}
	else if (item == tree->data)		//The binary search tree has distinct elements
	{
		cout << "No two items can have same values " << endl;
	}

	else if (item < tree->data)			//If value is less than that of leaf or root
	{
		cout << "Entered on the left side " << endl;
		insertItem(tree->left, item);
	}
	else if (item>tree->data)			//If value is greater than that of leaf of root
	{
		cout << "Entered on the right side " << endl;
		insertItem(tree->right, item);
	}

}



int main()
{

	Tree t1;//Creating a tree object

	while (1)
	{	
		cout << "Enter value for tree " << endl;		//Inputting value from the user
		int r;
		cin >> r;
		insertItem(t1.root, r);//Inserting item
	}
	return 0;
	//Program terminates successfully 

}
