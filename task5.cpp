//#include<iostream>
//#include<string>
//using namespace std;
//struct Node
//{
//	char data;
//	Node* next;
//	Node()
//	{
//		next = NULL;
//	}
//};
//class Queue
//{
//	Node* Front, * Rear;
//public:
//	Queue()
//	{
//		Front = Rear = NULL;
//	}
//	bool Enqueue(char value)
//	{
//		if (Front == NULL)
//		{
//			Node* newnode = new Node;
//			newnode->data = value;
//			newnode->next = Front;
//			Front = newnode;
//			Rear = newnode;
//			return true;
//		}
//		else {
//			Node* newnode = new Node;
//			newnode->data = value;
//			Rear->next = newnode;
//			Rear = newnode;
//			return true;
//		}
//	}
//	char De_Queue()
//	{
//		if (Front == Rear && (!(is_Empty())))
//		{
//			char a;
//			Node* temp = Front;
//			Front = Rear = NULL;
//			a = temp->data;
//			delete temp;
//			temp = NULL;
//			return a;
//		}
//		else if (!(is_Empty()))
//		{
//			char a;
//			Node* temp = Front;
//			Front = Front->next;
//			a = temp->data;
//			delete temp;
//			temp = NULL;
//			return a;
//		}
//		else {
//			cout << "Queue is already Empty!" << endl;
//			return 0;
//		}
//	}
//	bool is_Empty()
//	{
//		if (Front == NULL && Rear == NULL)
//		{
//			return true;
//		}
//		return false;
//	}
//	void display()
//	{
//		Node* temp = Front;
//		cout << "Displaying all the Queue!" << endl;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl << endl;
//	}
//	bool senetor(string x)
//	{
//		int count = 0;
//		char temp1, temp2;
//		for (int i = 0; i < x.length(); i++)
//		{
//			Enqueue(x[i]);
//		}
//		temp1 = De_Queue();
//		temp2 = De_Queue();
//		while (Front != NULL && count <= x.length())
//		{
//			count++;
//			if (temp1 != temp2)
//			{
//				Enqueue(temp1);
//				temp1 = De_Queue();
//				temp2 = De_Queue();
//			}
//			else
//			{
//				Enqueue(temp1);
//				temp1 = temp2;
//				temp2 = De_Queue();
//			}
//		}
//		if (temp1 == 'g' || temp1 == 'G')
//		{
//			cout << "Government wins!" << endl;
//		}
//		else if (temp1 == 'O' || temp1 == 'o') {
//			cout << "Opposition wins!" << endl;
//		}
//		return true;
//	}
//
//};
//int main()
//{
//	Queue obj;
//	string x;
//	cout << "Enter The Expression : ";
//	getline(cin, x);
//	obj.senetor(x);
//	system("pause");
//	return 0;
//}
