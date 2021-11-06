/*
Traversal using In-order, post-order and pre-order in Binary Search Trees using C++
*/

#include<iostream>
using namespace std;

class node			//Creating a class node
{
public:
	int data;//Data element


	node *left;
	node *right;
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



class Tree//Creating a Tree class
{
public:
	node *root;//Root node

	Tree()
	{
		root = NULL;
	}

};
void insertItem(node *&tree, int item)//Insertion function
{

	if (tree == NULL)

	{
	
		tree = new node(item);
		tree->right = NULL;
		tree->left = NULL;

	}
	else if (item == tree->data)
	{
		cout << "No two items can have same values " << endl;
	}

	else if (item < tree->data)
	{
		
		insertItem(tree->left, item);
	}
	else if (item>tree->data)
	{
		
		insertItem(tree->right, item);
	}

}
void inOrder(node *node1)//Recursive function
{
	if (node1 != NULL)
	{
		inOrder(node1->left);//Goes to the sub left node
		cout << node1->data;//Prints the value
		inOrder(node1->right);//Goes the the sub right node 
		
	}
	
}

void preOrder(node *node1)//Recursive function
{

	if (node1 != NULL)
	{
		cout << node1->data;//Prints the value
		inOrder(node1->left);//Goes to the sub left node
		inOrder(node1->right);//Goes to the sub right node
	}

	

}

void postOrderTraversal(node *node1)//Recursive function
{
	if (node1 != NULL)
	{
		postOrderTraversal(node1->left);//Goes to sub left node
		postOrderTraversal(node1->right);//Goes to sub right node
		cout << node1->data << "\t" << endl;//Prints the value

	}



}


//Main program

int main()
{

	Tree t1;//Creating tree object
	cout << "Enter root " << endl;//Inputting the root
	int x;
	cin >> x;
	insertItem(t1.root, x);//Creating a tree
	insertItem(t1.root, 6);
	insertItem(t1.root, 12);
	insertItem(t1.root, 18);
	insertItem(t1.root, 24);
	insertItem(t1.root, 4);
	cout << "In Order Traversal is as follows " << endl;
	inOrder(t1.root);//Function call of inorder traversal
	cout << endl;
	cout << "Post Order Traversal is as follows " << endl;
	postOrderTraversal(t1.root);//Function call of Post order traversal
	cout << endl; 
	cout << "Pre Order Traversal is as follows " << endl;
	preOrder(t1.root);//Function call of PreOrder Traversal
	return 0;
	//Program terminates successfully
	
}
