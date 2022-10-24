//#include<iostream>
//#include<string>
//#include<fstream>
//#include <chrono>
//#include <thread>
//#include<iomanip>
//using namespace std;
//string t;
//template<class type>
//struct Node
//{
//	type data;
//	Node* next;
//	Node()
//	{
//		next = NULL;
//	}
//};
//class Queue
//{
//	Node<string>* Front, * Rear;
//	Node<string>* dis;
//	int count;
//public:
//	Queue()
//	{
//		Front = Rear = NULL;
//		count = 0;
//	}
//	bool Enqueue(string value)
//	{
//		if (count < 15)
//		{
//			count++;
//			assigncode(value);
//			if (Front == NULL)
//			{
//				Node<string>* newnode = new Node<string>;
//				newnode->data = value;
//				newnode->next = Front;
//				Front = newnode;
//				Rear = newnode;
//				dis = newnode;
//				return true;
//			}
//			else {
//				Node<string>* newnode = new Node<string>;
//				newnode->data = value;
//				Rear->next = newnode;
//				Rear = newnode;
//				return true;
//			}
//		}
//		else {
//			cout << "Currrently Queue is full!" << endl;
//			return false;
//		}
//	}
//	string De_Queue()
//	{
//		count--;
//		if (Front == Rear && (!(is_Empty())))
//		{
//			string a;
//			Node<string>* temp = Front;
//			Front = Rear = NULL;
//			a = temp->data;
//			delete temp;
//			temp = NULL;
//			return a;
//		}
//		else if (!(is_Empty()))
//		{
//			string a;
//			Node<string>* temp = Front;
//			Front = Front->next;
//			a = temp->data;
//			dis = Front;
//			delete temp;
//			temp = NULL;
//			return a;
//		}
//		return "";
//	}
//	bool is_Empty()
//	{
//		if (Front == NULL && Rear == NULL)
//		{
//			return true;
//		}
//		return false;
//	}
//	string display()
//	{
//
//		if (dis != NULL) {
//			t = dis->data;
//			dis = dis->next;
//			return t;
//		}
//		return "-";
//	}
//	void assigncode(string& a)
//	{
//		int x = count % 16;
//
//		a = a + to_string(x);
//	}
//};
//bool writeFile(string x)
//{
//	ofstream write;
//	write.open("Students Visited.txt", ios::app);
//	write << x << endl;
//	write.close();
//	return true;
//}
//int main()
//{
//	Queue acc, academics, admin, exam, lost, sports, studenaffairs;
//	int option;
//	do {
//
//		cout << "Press 0 to Exit!" << endl;
//		cout << "Press 1 For New Entry " << endl;
//		cout << "Press 2 to Display" << endl;
//		cin >> option;
//		switch (option)
//		{
//		case 0: {
//			exit(0);
//		}
//		case 1: {
//			string details, rollno, name;
//			int user;
//			cout << "Enter Your Name : ";
//			cin.ignore();
//			getline(cin, name);
//			cout << "Enter Your Roll no : ";
//			cin >> rollno;
//			details = name + " " + rollno;
//			cout << "Press 1 for Accounts" << endl;
//			cout << "Press 2 for Academics" << endl;
//			cout << "Press 3 for Admin" << endl;
//			cout << "Press 4 for Examinations" << endl;
//			cout << "Press 5 for Lost And Found" << endl;
//			cout << "Press 6 for Sports" << endl;
//			cout << "Press 7 for Student Affairs" << endl;
//			cin >> user;
//			switch (user)
//			{
//			case 1: {
//				details += " Accounts";
//				acc.Enqueue("Acc");
//				writeFile(details);
//				break;
//			}
//			case 2: {
//				details += " Academics";
//				academics.Enqueue("Acd");
//				writeFile(details);
//				break;
//			}
//			case 3: {
//				details += " Admin";
//				admin.Enqueue("Adm");
//				writeFile(details);
//				break;
//			}
//			case 4: {
//				details += " Examinations";
//				exam.Enqueue("Exm");
//				writeFile(details);
//				break;
//			}
//			case 5: {
//				details += " Lost&Found";
//				lost.Enqueue("L&F");
//				writeFile(details);
//				break;
//			}
//			case 6: {
//				details += " Sports";
//				sports.Enqueue("Sp");
//				writeFile(details);
//				break;
//			}
//			case 7: {
//				details += " Student Affairs";
//				academics.Enqueue("Sa");
//				writeFile(details);
//				break;
//			}
//			default:
//				cout << "Invalid input!" << endl;
//				break;
//			}
//			break;
//		}
//		case 2: {
//			system("cls");
//			for (int i = 0; i < 70; i++)
//			{
//				cout << "- ";
//			}
//			cout << endl << "| Accounts | Academics | Admin | Examinations| Loast&Found | Sports | Student Affairs | " << endl;
//			for (int i = 0; i < 70; i++)
//			{
//				cout << "- ";
//			}
//			cout << endl;
//			for (int i = 0; i < 15; i++)
//			{
//				cout << "|" << acc.display() << setw(11) << "|";
//				cout << academics.display() << setw(11) << "|";
//				cout << admin.display() << setw(11) << "|";
//				cout << exam.display() << setw(11) << "|";
//				cout << lost.display() << setw(11) << "|";
//				cout << sports.display() << setw(11) << "|";
//				cout << studenaffairs.display() << setw(11) << "|" << endl;
//			}
//			this_thread::sleep_for(chrono::seconds(2s));
//			acc.De_Queue();
//			academics.De_Queue();
//			admin.De_Queue();
//			exam.De_Queue();
//			lost.De_Queue();
//			sports.De_Queue();
//			studenaffairs.De_Queue();
//			break;
//		}
//		default:
//			cout << "Invalid Input!" << endl;
//			break;
//		}
//	} while (option != 0);
//	system("pause");
//	return 0;
//}
