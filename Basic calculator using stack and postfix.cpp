//#include<iostream>
//#include<string>
//using namespace std;
//int priority(char a);
//template <class type>
//struct Node
//{
//	type data;
//	Node* next;
//	Node()
//	{
//		next = NULL;
//	}
//};
//class Stack
//{
//	Node<char>* top;
//public:
//	Stack()
//	{
//		top = NULL;
//	}
//	bool push(char value)
//	{
//		Node<char>* newnode = new Node<char>;
//		newnode->data = value;
//		newnode->next = top;
//		top = newnode;
//		return true;
//	}
//	char pop()
//	{
//		if (!(is_Empty()))
//		{
//			char a;
//			Node<char>* temp = top;
//			top = top->next;
//			a = temp->data;
//			delete temp;
//			temp = NULL;
//			return a;
//		}
//		else {
//			cout << "Stack is already Empty!" << endl;
//			return 0;
//		}
//	}
//	bool is_Empty()
//	{
//		if (top == NULL)
//		{
//			return true;
//		}
//		return false;
//	}
//	void display()
//	{
//		Node<char>* temp = top;
//		cout << "Displaying all the Stack!" << endl;
//		while (temp != NULL)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl << endl;
//	}
//	int calculator(string a)
//	{
//		a = postfix(a);
//		char temp;
//		int num1, num2;
//		char temp1;
//		for (int i = 0; i < a.length(); i++)
//		{
//			temp = a[i];
//			if (temp == '^' || temp == '/' || temp == '*' || temp == '+' || temp == '-' && top != NULL)
//			{
//				num2 = int(pop()) - 48;
//				num1 = int(pop()) - 48;
//				if (temp == '^')
//				{
//					num1 = num1 ^ num2;
//					temp1 = char(num1) + 48;
//					push(temp1);
//				}
//				else if (temp == '/')
//				{
//					num1 = num1 / num2;
//					temp1 = char(num1) + 48;
//					push(temp1);
//				}
//				else if (temp == '*')
//				{
//					num1 = num1 * num2;
//					temp1 = char(num1) + 48;
//					push(temp1);
//				}
//				else if (temp == '+')
//				{
//					num1 = num1 + num2;
//					temp1 = char(num1) + 48;
//					push(temp1);
//				}
//				else if (temp == '-')
//				{
//					num1 = num1 - num2;
//					temp1 = char(num1) + 48;
//					push(temp1);
//				}
//			}
//			else
//			{
//				push(temp);
//			}
//		}
//		return num1;
//	}
//	string postfix(string x)
//	{
//		char temp;
//		string postfix;
//		for (int i = 0; i < x.length(); i++)
//		{
//			temp = x[i];
//			if (temp >= '1' && temp <= '9')
//			{
//				postfix += temp;
//			}
//			else if (temp == '(')
//			{
//				push(temp);
//			}
//			else if (temp == ')')
//			{
//				if (is_Empty() != true) {
//					while (top->data != '(')
//					{
//						postfix += pop();
//					}
//					pop();
//				}
//			}
//			else {
//				if (is_Empty() != true) {
//					while (priority(temp) >= priority(top->data) && top != NULL)
//					{
//						if (top->data == '(')
//						{
//							pop();
//						}
//						else {
//							postfix += pop();
//						}
//					}
//				}
//				if (temp != ')')
//				{
//					push(temp);
//				}
//
//			}
//
//		}
//		while (!is_Empty())
//		{
//
//			if (top->data == '(')
//			{
//				pop();
//			}
//			else {
//				postfix += pop();
//			}
//		}
//		return postfix;
//	}
//};
//int main()
//{
//	Stack obj;
//	string x;
//	int ans;
//	cout << "Enter The Expression : ";
//	getline(cin, x);
//	ans = obj.calculator(x);
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}
//
//int priority(char a)
//{
//
//	if (a == '^') {
//		return 1;
//	}
//	else if (a == '/')
//	{
//		return 2;
//	}
//	else if (a == '*')
//	{
//		return 3;
//	}
//	else if (a == '+')
//	{
//		return 4;
//	}
//	else if (a == '-')
//	{
//		return 5;
//	}
//	else if (a == '(')
//
//	{
//		return 6;
//	}
//	return 0;
//}
