//#include<iostream>
//#include"AVLTREE.h"
//using namespace std;
//int main()
//{
//	BST<int> obj;
//	int option = 0;
//	do
//	{
//		system("cls");
//		cout << "Press 0 to Exit!" << endl;
//		cout << "Press 1 to Insert" << endl;
//		cout << "Press 2 to Delete" << endl;
//		cout << "Press 3 to Search Key" << endl;
//		cout << "Press 4 to findmax" << endl;
//		cout << "Press 5 to find min" << endl;
//		cout << "Press 6 to Inorder traversal" << endl;
//		cout << "Press 7 to preorder Traversal" << endl;
//		cout << "Press 8 to postorder Traversal" << endl;
//		cout << "Press 9 to treeheight" << endl;
//		cout << "Press 10 to treeNodecount" << endl;
//		cout << "Press 11 to treeleavescount" << endl;
//		cout << "Press 12 to PrintNodelevel" << endl;
//		cin >> option;
//		switch (option)
//		{
//		case 0: {
//			exit(0);
//			break;
//		}
//		case 1: {
//			int x;
//			cout << "Enter The element : ";
//			cin >> x;
//			obj.insert(x);
//			break;
//		}
//		case 2: {
//			int x;
//			cout << "Enter The element : ";
//			cin >> x;
//			obj.delnode(x);
//			break;
//		}
//		case 3: {
//			int x;
//			cout << "Enter The element : ";
//			cin >> x;
//			obj.searchkey(x);
//			break;
//		}
//		case 4: {
//			int x = 0;
//			x = obj.Findmax();
//			cout << "The Maximum is : " << x << endl;
//			break;
//		}
//		case 5: {
//			int x = 0;
//			x = obj.Findmin();
//			cout << "The Minimum is : " << x << endl;
//			break;
//		}
//		case 6: {
//			obj.Inordertraversal();
//			system("pause");
//			cout << endl;
//			break;
//		}
//		case 7: {
//			obj.Preordertraversal();
//			system("pause");
//			cout << endl;
//			break;
//		}
//		case 8: {
//			obj.Postordertraversal();
//			system("pause");
//			cout << endl;
//			break;
//		}
//		case 9: {
//			int x = obj.TreeHeight();
//			cout << "The Height is : "<<x<< endl;
//			break;
//		}
//		case 10: {
//			int x = obj.TreeNodeCount();
//			cout << "The Node count is : " << x << endl;
//			break;
//		}
//		case 11: {
//			int x = obj.TreeLeaves();
//			cout << "The Leaves count is : " << x << endl;
//			break;
//		}
//		case 12: {
//			int x = 0;
//			cout << "ENter The Elment : ";
//			cin >> x;
//			x=obj.PrintNodelevel(x);
//			cout << "The Node level is : " << x << endl;
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