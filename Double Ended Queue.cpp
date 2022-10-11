//#include<iostream>
//using namespace std;
//class Queue
//{
//	int front, rear, size, arr[5];
//public:
//	Queue()
//	{
//		front = rear = -1;
//		size = 5;
//	}
//	bool isfull()
//	{
//		if (rear + 1 % size == front)
//		{
//			return true;
//		}
//		return false;
//	}
//	void insert_front(int x) {
//		if (front == -1 && rear == -1)
//		{
//			front = rear = 0;
//			arr[front] = x;
//			cout << "Inserted At Front " << endl;
//		}
//		else if (front == 0 && rear == 0)
//		{
//			front = size - 1;
//			arr[front] = x;
//			cout << "Inserted At Front " << endl;
//		}
//		else if (!isfull())
//		{
//			front--;
//			arr[front] = x;
//			cout << "Inserted At Front " << endl;
//		}
//	}
//	void insert_last(int x)
//	{
//		if (front == -1 && rear == -1)
//		{
//			front = rear = 0;
//			arr[rear] = x;
//			cout << "Inserted At Last " << endl;
//		}
//		else if (front == 0 && rear == 0)
//		{
//			rear++;
//			arr[rear] = x;
//			cout << "Inserted At Last " << endl;
//		}
//		else if (!isfull())
//		{
//			rear++;
//			arr[rear] = x;
//			cout << "Inserted At Last " << endl;
//		}
//	}
//	void display()
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	bool isempty()
//	{
//		if (front == -1 && rear == -1)
//		{
//			return true;
//		}
//		return false;
//	}
//	void Delete_Front()
//	{
//		if (!isempty())
//		{
//			if (front == rear)
//			{
//				front = rear = -1;
//				cout << "Deleted From Front" << endl;
//			}
//			else if (front = size - 1)
//			{
//				arr[front] = -1;
//				front = 0;
//				cout << "Deleted From Front" << endl;
//			}
//			else {
//				arr[front] = -1;
//				front++;
//				cout << "Deleted From Front" << endl;
//			}
//		}
//	}
//	void Delete_Last()
//	{
//		if (!isempty())
//		{
//			if (front == rear)
//			{
//				front = rear = -1;
//				cout <<  "Deleted From Last" << endl;
//			}
//			else if (rear == 0 && front != 0)
//			{
//				arr[rear] = -1;
//				rear = size - 1;
//				cout << "Deleted From Last" << endl;
//			}
//			else {
//				arr[rear] = -1;
//				rear--;
//				cout << "Deleted From Last" << endl;
//			}
//		}
//	}
//	int Get_Front()
//	{
//		return arr[front];
//	}
//	int Get_Last()
//	{
//		return arr[rear];
//	}
//};
//int main()
//{
//	Queue obj;
//	obj.insert_front(1);
//	obj.insert_front(2);
//	obj.insert_front(3);
//	obj.insert_last(4);
//	obj.insert_last(5);
//	obj.display();
//	obj.Delete_Front();
//	obj.Delete_Last();
//	obj.Delete_Last();
//	obj.display();
//	system("pause");
//	return 0;
//}
