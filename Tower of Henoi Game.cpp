//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* next;
//	Node()
//	{
//		next = NULL;
//	}
//};
//class Stack {
//	Node* top;
//	int count = 0;
//public:
//	Stack()
//	{
//		top = NULL;
//	}
//	bool Push(int value)
//	{
//		Node* newnode = new Node;
//		newnode->data = value;
//		newnode->next = top;
//		top = newnode;
//		count++;
//		return true;
//	}
//	bool is_Empty()
//	{
//		if (top == NULL)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool pop()
//	{
//		if (is_Empty())
//		{
//			cout << "The Stack  is Already Empty!" << endl;
//			return false;
//		}
//		else
//		{
//			Node* temp = top;
//			top = top->next;
//			delete temp;
//			temp = NULL;
//			count--;
//			return true;
//		}
//	}
//	int topval()
//	{
//		if (top == NULL)
//		{
//			return 6;
//		}
//		else return top->data;
//	}
//	void display()
//	{
//		Node* temp = top;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//	bool tower(int i1, int i2, Stack* ptr)
//	{
//		bool x,j;
//		if (ptr[i1 - 1].topval() < ptr[i2 - 1].topval())
//		{
//			ptr[i2 - 1].Push(ptr[i1 - 1].topval());
//			ptr[i1 - 1].pop();
//			x = ptr[2].checkend();
//			j = ptr[1].checkend();
//			if (x == true||j==true)
//			{
//				return true;
//			}
//			else {
//				return false;
//			}
//		}
//		else {
//			cout << "Operation can not be performed!" << endl;
//			return false;
//		}
//	}
//	bool checkend()
//	{
//		if (count == 5)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//int main()
//{
//	Stack* obj = new Stack[3];
//	bool c = false;
//	for (int i = 5; i > 0; i--)
//	{
//		obj[0].Push(i);
//	}
//	int ch1, ch2;
//	do {
//		for (int i = 0; i < 3; i++)
//		{
//			cout << "Stack  " << i + 1 << ":";
//			obj[i].display();
//			cout << endl;
//		}
//		cout << "Enter From Whcih Stack you want to move:";
//		cin >> ch1;
//		cout << "Enter Destination ";
//		cin >> ch2;
//		c = obj[0].tower(ch1, ch2, obj);
//	} while (c == false);
//	cout << "You Have Completed The Game!" << endl;
//	system("Pause");
//	return 0;
//}
