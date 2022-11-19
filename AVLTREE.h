#pragma once
#include<iostream>
using namespace std;
template<class dt>
struct Node
{
	dt data;
	Node* right, * left;
	Node()
	{
		right = left = NULL;
	}
};
template<class type>
class BST
{
private:
	Node<type>* root;
	void delsearch(Node<type>*& ptr, int key)
	{
		if (ptr == NULL)
		{
			cout << "Key not Found!" << endl;
			return;
		}
		else {
			if (key < ptr->data)
			{
				delsearch(ptr->left, key);
			}
			else if (key > ptr->data)
			{
				delsearch(ptr->right, key);
			}
			else {
				deletenode(ptr);
			}
		}
	}
	void deletenode(Node<type>*& ptr) {
		Node<type>* temp;
		if (ptr->left == NULL)
		{
			temp = ptr;
			ptr = ptr->right;
			delete temp;
		}
		else if (ptr->right == NULL)
		{
			temp = ptr;
			ptr = ptr->left;
			delete temp;
		}
		else {
			temp = ptr->right;
			while (temp->left != NULL) {
				temp = temp->left;
			}
			temp->left = ptr->left;
			temp = ptr;
			ptr = ptr->right;
			delete temp;
		}
	}
	void Insertelment(Node<type>*& ptr, type data)
	{
		if (ptr == NULL)
		{
			ptr = new Node<type>;
			ptr->data = data;
		}
		else if (data < ptr->data)
		{

			Insertelment(ptr->left, data);
		}
		else
		{
			Insertelment(ptr->right, data);
		}
	}
	void inorder(Node<type>* ptr)
	{
		if (ptr != NULL)
		{

			inorder(ptr->left);
			cout << ptr->data << " ";
			inorder(ptr->right);
		}
	}
	type search(Node<type>* ptr, type data)
	{
		if (ptr == NULL)
		{
			cout << "Key Not Found!" << endl;
			return 0;
		}
		else {
			if (data < ptr->data)
			{
				search(ptr->left, data);
			}
			else if (data > ptr->data)
			{
				search(ptr->right, data);
			}
			else {
				return ptr->data;
			}
		}
	}
	type maximum(Node<type>* ptr) {
		if (ptr->right == NULL)
		{
			return ptr->data;
		}
		maximum(ptr->right);
	}
	type min(Node<type>* ptr) {
		if (ptr->left == NULL)
		{
			return ptr->data;
		}
		min(ptr->left);
	}
	void preorder(Node<type>* ptr)
	{
		if (ptr != NULL)
		{
			cout << ptr->data << " ";
			preorder(ptr->left);
			preorder(ptr->right);
			return;
		}
	}
	void postorder(Node<type>* ptr)
	{
		if (ptr != NULL)
		{

			postorder(ptr->left);
			postorder(ptr->right);
			cout << ptr->data << " ";
			return;
		}
	}

	int height(Node<type>* ptr, int left_height, int& right_height)
	{
		if (ptr != NULL)
		{
			height(ptr->left, left_height + 1, right_height);
			height(ptr->right, left_height + 1, right_height);
			if (left_height >= right_height)
			{
				right_height = left_height;
			}
		}
		return right_height;
	}
	void countnode(Node<type>* ptr, int& c)
	{
		if (ptr != NULL)
		{
			countnode(ptr->left, c);
			c++;
			countnode(ptr->right, c);
		}
	}
	void leaves(Node<type>* ptr, int& c)
	{
		if (ptr != NULL)
		{
			if (ptr->left == NULL && ptr->right == NULL)
			{
				c = c + 1;
			}
			leaves(ptr->left, c);
			leaves(ptr->right, c);

		}
	}
	void nodelevel(Node<type>* ptr, int& c, type key)
	{
		if (ptr == NULL) {
			cout << "There is no Element in Tree" << endl;
			return;
		}
		else {
			if (key < ptr->data) {
				c++;
				nodelevel(ptr->left, c, key);
			}
			else if (key > ptr->data) {
				c++;
				nodelevel(ptr->right, c, key);
			}
			else {
				return;
			}
		}

	}
	int balancedfactor(Node<type>* ptr)
	{
		int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
		if (ptr != NULL && ptr->left != NULL)
		{
			x1 = 0;
		}
		if (ptr != NULL && ptr->right != NULL)
		{
			x2 = 0;
		}
		if (ptr != NULL) {
			x1 = height(ptr->left, x1, y1);
			x2 = height(ptr->right, x2, y2);
		}
		x1 = x1 - x2;
		return x1;
	}
	void detectrotation(Node<type>*& ptr, int& x)
	{
		if (ptr != NULL)
		{
			detectrotation(ptr->left, x);
			detectrotation(ptr->right, x);
			x = balancedfactor(ptr);
			if (x < -1 || x>1)
			{
				return;
			}

		}
	}
	void Rotate_RR(Node<type>*& temp1, Node<type>*& temp2)
	{
		temp1->left = temp2->right;
		temp2->right = temp1;
		if (temp2->right == root)
		{
			root = temp2;
		}
	}
	void Rotate_LL(Node<type>*& temp1, Node<type>*& temp2)
	{
		temp1->right = temp2->left;
		temp2->left = temp1;
		if (temp2->left == root)
		{
			root = temp2;
		}
	}
	void Rotate_RL(Node<type>*& temp1, Node<type>*& temp2)
	{
		temp1->left = temp2->right->right;
		temp2->right->right = temp1;
		temp1 = temp2->right;
		temp2->right = temp2->left;
		temp1->left = temp2;
		if (temp1->right == root)
		{
			root = temp1;
		}
	}
	void Rotate_LR(Node<type>*& temp1, Node<type>*& temp2)
	{
		temp1->right = temp2->left->left;
		temp2->left->left = temp1;
		temp1 = temp2->left;
		temp2->left = temp1->right;
		temp1->right = temp2;
		if (temp1->left == root)
		{
			root = temp1;
		}
	}
public:
	BST()
	{
		root = NULL;
	}
	void insert(type data) {
		Node<type>* temp = root;
		Node<type>* temp2 = NULL;
		int x = 0;
		string det = "";
		Insertelment(root, data);
		detectrotation(temp, x);
		if (x > 1)
		{
			det += 'R';
			temp2 = temp->left;
			x = balancedfactor(temp2);
			if (x >= 1)
			{
				det += 'R';
			}
			else if (x <= -1)
			{
				det += 'L';
			}
		}
		else if (x < -1)
		{
			det += 'L';
			temp2 = temp->right;
			x = balancedfactor(temp2);
			if (x >= 1)
			{
				det += 'R';
			}
			else if (x <= -1)
			{
				det += 'L';
			}
		}
		x = 0;
		if (det == "RR")
		{
			Rotate_RR(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "LL")
		{
			Rotate_LL(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "RL")
		{
			Rotate_RL(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "LR")
		{
			Rotate_LR(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
	}
	void Inordertraversal()
	{
		inorder(root);
	}
	type searchkey(type key)
	{
		return search(root, key);
	}
	type Findmax()
	{
		return maximum(root);
	}
	type Findmin()

	{
		return min(root);
	}
	void Preordertraversal()
	{
		preorder(root);
	}
	void Postordertraversal()
	{
		postorder(root);
	}
	int TreeHeight()
	{
		int x = 0, y = 0;
		height(root, x, y);
		return x;

	}
	int TreeNodeCount()
	{
		int x = 0;
		countnode(root, x);
		return x;
	}
	int TreeLeaves()
	{
		int x = 0;
		leaves(root, x);
		return x;
	}
	int PrintNodelevel(type key)
	{
		int x = 0;
		nodelevel(root, x, key);
		return x;
	}
	void delnode(int key)
	{
		Node<type>* temp = root;
		Node<type>* temp2 = NULL;
		int x = 0;
		string det = "";
		delsearch(root, key);
		detectrotation(temp, x);
		if (x < -1 || x > 1)
		{
			for (int i = 0; i < 2; i++)
			{
				if (x >= 1)
				{
					det += 'R';
					temp2 = temp->left;
					x = balancedfactor(temp2);
				}
				else if (x <= -1)
				{
					det += 'L';
					temp2 = temp->right;
					x = balancedfactor(temp2);
				}
			}
		}
		x = 0;
		if (det == "RR")
		{
			Rotate_RR(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "LL")
		{
			Rotate_LL(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "RL")
		{
			Rotate_RL(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
		else if (det == "LR")
		{
			Rotate_LR(temp, temp2);
			det = "";
			temp = root;
			detectrotation(temp, x);
		}
	}
};

