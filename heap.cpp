#include<iostream>
using namespace std;
class Heap
{
	int* arr, size, elements;
	int parent(int child)
	{
		return (child - 1) / 2;
	}
	int rightchild(int parent)
	{
		return (parent * 2) + 2;
	}
	int leftchild(int parent)
	{
		return (parent * 2) + 1;
	}
public:
	Heap()
	{
		arr = NULL;
		size = elements = 0;
	}
	Heap(int s)
	{
		size = s;
		arr = new int[s];
	}
	void insertminheap(int key)
	{
		if (size  == elements)
		{
			cout << "Array is already full" << endl;
			return;
		}
		arr[elements] = key;
		elements++;
		for (int i = elements-1; i >=0;i--)
		{
			if (arr[parent(i)] > arr[i])
			{
				swap(arr[parent(i)], arr[i]);
				i = parent(i);
				i++;
			}
		}
	}
	void insertmaxheap(int key) {
		if (size == elements)
		{
			cout << "Array is already full" << endl;
			return;
		}
		arr[elements] = key;
		elements++;
		for (int i = elements - 1; i >= 0; i--)
		{
			if (arr[parent(i)] > arr[i])
			{
				swap(arr[parent(i)], arr[i]);
				i = parent(i);
				i++;
			}
		}
	}
	void maxheapify(int i) {
		int left = leftchild(i);
		int right = rightchild(i);
		int largest = i;
		if (left <= size && arr[left] > arr[largest])
		{
			largest = left;
		}
		if (right <= size && arr[right] > arr[largest])
		{
			largest = right;
		}
		if (largest != i)
		{
			swap(arr[i], arr[largest]);
			minheapify(largest);
		}
	}
	void minheapify(int i)
	{
		int left = leftchild(i);
		int right = rightchild(i);
		int smallest = i;
		if (left <= size && arr[left] < arr[smallest])
		{
			smallest = left;
		}
		if (right <= size && arr[right] < arr[smallest])
		{
			smallest = right;
		}
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);
			minheapify(smallest);
		}
	}
	int delmin()
	{
		int min = arr[0];
		arr[0] = arr[elements - 1];
		elements--;
		minheapify(0);
		return min;
	}
	void print()
	{
		for (int i = 0; i < elements; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	int x,y;
	cout << "Enter The Size of array ";
	cin >> x;
	Heap obj(x);
	for (int i = 0; i < x; i++)
	{
		cout << "Enter The Key : ";
		cin >> y;
		obj.insertminheap(y);
	}
	system("pause");
	return 0;
}
