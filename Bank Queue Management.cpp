#include<iostream>
#include<string>
#include<thread>
#include<chrono>
using namespace std;
template<class type>
struct Node
{
	int data;
	Node* next;
	Node()
	{
		next = NULL;
	}
};
template<class t>
class Queue
{
	Node<t>* Front;
	Node<t>* Rear;
	int count;
public:
	Queue()
	{
		Front = Rear = NULL;
		count = 0;
	}
	bool is_Empty()
	{
		if (Front == NULL && Rear == NULL)
		{
			return true;
		}
		return false;
	}
	bool is_Full()
	{
		if (count >= 10)
		{
			return true;
		}
		return false;
	}
	bool Enqueue(t value)
	{
		if (is_Full())
		{
			cout << "The Queue is Already Full !" << endl;
			return false;
		}
		else if (is_Empty())
		{
			count++;
			Node<t>* newnode = new Node<t>;
			newnode->data = value;
			newnode->next = Front;
			Front = newnode;
			Rear = newnode;
			return true;
		}
		else {
			count++;
			Node<t>* newnode = new Node<t>;
			newnode->data = value;
			Rear->next = newnode;
			Rear = newnode;
			return true;
		}
	}
	t Dequeue()
	{
		if (is_Empty())
		{
			return -1;
		}
		else if (Front == Rear)
		{
			count--;
			Node<t>* temp = Front;
			Front = Rear = NULL;
			t var;
			var = temp->data;
			delete temp;
			temp = NULL;
			return var;
		}
		else {
			count--;
			Node<t>* temp = Front;
			Front = Front->next;
			t var = temp->data;
			delete temp;
			temp = NULL;
			return var;
		}
	}
	void Arrange(Queue* ptr, int s)
	{
		t var;
		ptr[0].Dequeue();
		for (int i = 1; i < s; i++)
		{
			var = ptr[i].Dequeue();
			if (var != -1) {
				ptr[i - 1].Enqueue(var);
			}
		}
	}
	void Display()
	{
		Node<t>* ptr = Front;
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
};
int main()
{
	int user, option;
	cout << "Enter the Number of Queues : ";
	cin >> user;
	Queue<int>* obj = new  Queue<int>[user];
	for (int i = 0; i < user; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			obj[i].Enqueue(j);
		}
	}
	do {
		cout << "Press0 to Exit" << endl;
		cout << "Press1 to Enqueue" << endl;
		cout << "Press2 to Dequeue" << endl;
		cout << "Press3 to Display" << endl;
		cin >> option;
		switch (option)
		{
		case 0: {
			exit(0);
			break;
		}
		case 1: {
			int x;
			cout << "Enter the value You Want to Enter :";
			cin >> x;
			obj[user - 1].Enqueue(x);
			break;
		}
		case 2: {
			obj[0].Arrange(obj, user);
			break;
		}
		case 3: {
			for (int i = 0; i < user; i++)
			{
				obj[i].Display();
			}
			break;
		}
		default: {
			cout << "Invalid Choice!" << endl;
			break;
		}

		}
		this_thread::sleep_for(chrono::seconds(2));
		obj[0].Arrange(obj, user);
	} while (option != 0);
	system("pause");
	return 0;
}
