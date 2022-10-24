//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//template<class t>
//class De_Queue
//{
//private:
//	t* arr;
//	int Front, Rear, Q_Size;
//public:
//	De_Queue(int s)
//	{
//		Front = Rear = -1;
//		arr = new t[s];
//		Q_Size = s;
//		for (int i = 0; i < Q_Size; i++)
//		{
//			arr[i] = -1;
//		}
//	}
//	bool is_Full()
//	{
//		if ((Rear + 1 % Q_Size) == Front) {
//			return true;
//		}
//		return false;
//	}
//	bool is_Empty()
//	{
//		if (Front == -1 && Rear == -1)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool Insertion_Last(t value)
//	{
//		if (is_Full())
//		{
//			cout << "The Queue is already Full!" << endl;
//			return false;
//		}
//		else if (is_Empty())
//		{
//			Front = Rear = 0;
//			arr[Rear] = value;
//			FIle_Incoming(value, "Last");
//			return true;
//		}
//		else if (arr[(Rear + 1) % Q_Size] == -1) {
//			Rear = (Rear + 1) % Q_Size;
//			arr[Rear] = value;
//			FIle_Incoming(value, "Last");
//			return true;
//		}
//		else {
//			int j = 0;
//			while (arr[(Rear) % Q_Size] != -1 && j < Q_Size)
//			{
//				Rear = (Rear + 1) % Q_Size;
//				j++;
//			}
//			if (arr[(Rear) % Q_Size] == -1)
//			{
//				arr[Rear] = value;
//				FIle_Incoming(value, "Last");
//				return true;
//			}
//			else {
//				cout << "Queue is Full" << endl;
//				return false;
//			}
//		}
//	}
//	bool Insertion_Front(t value)
//	{
//		if (is_Full())
//		{
//			cout << "Queue Is Already Full!" << endl;
//			return false;
//		}
//		else if (is_Empty())
//		{
//			Front = Rear = 0;
//			arr[Front] = value;
//			FIle_Incoming(value, "Front");
//			return true;
//		}
//		else if (Front == 0) {
//			Front = Q_Size - 1;
//			arr[Front] = value;
//			FIle_Incoming(value, "Front");
//			return true;
//		}
//		else {
//			Front--;
//			arr[Front] = value;
//			FIle_Incoming(value, "Front");
//			return true;
//		}
//	}
//	bool Insertion_Middle(t value, int x)
//	{
//		if (is_Full())
//		{
//			cout << "Queue Is Already Full!" << endl;
//			return false;
//		}
//		else if (is_Empty())
//		{
//			Front = Rear = x - 1;
//			arr[Front] = value;
//			FIle_Incoming(value, "Middle");
//			return true;
//		}
//		else if (arr[x - 1] == -1)
//		{
//			arr[x - 1] = value;
//			FIle_Incoming(value, "Middle");
//			return true;
//		}
//		else {
//			cout << "ALready Element is There!" << endl;
//			return false;
//		}
//	}
//	t Dequeue_Last()
//	{
//		t x;
//		if (is_Empty())
//		{
//			cout << "Queue is Already Empty!" << endl;
//			return 0;
//		}
//		else if (Front == Rear)
//		{
//			x = arr[Rear];
//			Front = Rear = -1;
//			File_Outgoing(x, "Last");
//			return x;
//		}
//		else if (Rear == 0) {
//			x = arr[Rear];
//			arr[Rear] = -1;
//			Rear = Q_Size - 1;
//			File_Outgoing(x, "Last");
//			return x;
//		}
//		else {
//			x = arr[Rear];
//			arr[Rear] = -1;
//			Rear--;
//			File_Outgoing(x, "Last");
//			return x;
//		}
//	}
//	t Dequeue_Front()
//	{
//		t x;
//		if (is_Empty())
//		{
//			cout << "Queue is Already Empty!" << endl;
//			return 0;
//		}
//		else if (Front == Rear)
//		{
//			x = arr[Front];
//			Front = Rear = -1;
//			File_Outgoing(x, "Front");
//			return x;
//		}
//		else {
//			x = arr[Front];
//			arr[Front] = -1;
//			Front = (Front + 1) % Q_Size;
//			File_Outgoing(x, "Front");
//			return x;
//		}
//	}
//	void display()
//	{
//		int x = Front;
//		if (!is_Empty()) {
//			do
//			{
//				cout << arr[x] << " ";
//				x = (x + 1) % Q_Size;
//			} while (x != Front);
//		}
//		cout << endl;
//	}
//	bool FIle_Incoming(t value, string end)
//	{
//		ofstream Write;
//		Write.open("Incoming.txt", ios::app);
//		Write << value << " " << end << endl;
//		Write.close();
//		return true;
//	}
//	bool File_Outgoing(t value, string end)
//	{
//		ofstream Write;
//		Write.open("Outgoing.txt", ios::app);
//		Write << value << " " << end << endl;
//		Write.close();
//		return true;
//	}
//	void Display_Incoming()
//	{
//		ifstream read;
//		string x;
//		read.open("Incoming.txt");
//		while (!read.eof()) {
//			getline(read, x);
//			cout << x << endl;
//		}
//		read.close();
//	}
//	void Display_Outgoing()
//	{
//		ifstream read;
//		string x;
//		read.open("Outgoing.txt");
//		while (!read.eof()) {
//			getline(read, x);
//			cout << x << endl;
//		}
//		read.close();
//	}
//};
//int main()
//{
//	int x;
//	cout << "Enter the Size Of Queue ";
//	cin >> x;
//	De_Queue<int> obj(x);
//	int val;
//	do {
//		cout << "Press 0 to exit" << endl;
//		cout << "Press 1 TO Enqueue At Front :" << endl;
//		cout << "Press 2 TO Enqueue At End :" << endl;
//		cout << "Press 3 TO Enqueue At Middle :" << endl;
//		cout << "Press 4 TO DEqueue At Front :" << endl;
//		cout << "Press 5 TO DEqueue At Last :" << endl;
//		cout << "Press 6 TO Display Queue :" << endl;
//		cout << "Press 7 TO Display Incomings :" << endl;
//		cout << "Press 8 TO Display Outgoings :" << endl;
//		cin >> x;
//		switch (x)
//		{
//		case 0: {
//			exit(0);
//			break;
//		}
//		case 1: {
//			cout << "Enter The Value";
//			cin >> val;
//			obj.Insertion_Front(val);
//			break;
//		}
//		case 2: {
//			cout << "Enter The Value";
//			cin >> val;
//			obj.Insertion_Last(val);
//			break;
//		}
//		case 3:
//		{
//			int i = 0;
//			cout << "Enter The Value";
//			cin >> val;
//			cout << "Enter the Index ";
//			cin >> i;
//			obj.Insertion_Middle(val, i);
//			break;
//		}
//		case 4: {
//			obj.Dequeue_Front();
//			break;
//		}
//		case 5: {
//			obj.Dequeue_Last();
//			break;
//		}
//		case 6: {
//			obj.display();
//			break;
//		}
//		case 7: {
//			obj.Display_Incoming();
//			break;
//		}
//		case 8: {
//			obj.Display_Outgoing();
//			break;
//		}
//		}
//	} while (x != 0);
//	system("pause");
//	return 0;
//}
